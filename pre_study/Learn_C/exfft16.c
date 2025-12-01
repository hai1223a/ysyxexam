#include <time.h>
#include <stdio.h>
#include <stdint.h>

#define MAX_N 1024
#define PI_FIXED 25736 // 3.14159265358979323846 * (1 << 13) ≈ 25736
#define FRACTIONAL_BITS 13

typedef struct {
    int16_t real;
    int16_t imag;
} Complex16;

// 定点乘法（Q3.13）
static int16_t fixed_mul(int16_t a, int16_t b) {
    return (int16_t)(((int32_t)a * b) >> FRACTIONAL_BITS);
}

// 泰勒展开5级的sin，输入x为Q13，返回Q13
int16_t my_sin(int16_t x) {
    int16_t x2 = fixed_mul(x, x);
    int16_t res = x;
    int16_t term = x;
    term = fixed_mul(term, -x2) / (2 * 3);
    res += term;
    term = fixed_mul(term, -x2) / (4 * 5);
    res += term;
    term = fixed_mul(term, -x2) / (6 * 7);
    res += term;
    term = fixed_mul(term, -x2) / (8 * 9);
    res += term;
    return res;
}

// 泰勒展开5级的cos，输入x为Q13，返回Q13
int16_t my_cos(int16_t x) {
    int16_t x2 = fixed_mul(x, x);
    int16_t res = (1 << FRACTIONAL_BITS);
    int16_t term = (1 << FRACTIONAL_BITS);
    term = fixed_mul(term, -x2) / (1 * 2);
    res += term;
    term = fixed_mul(term, -x2) / (3 * 4);
    res += term;
    term = fixed_mul(term, -x2) / (5 * 6);
    res += term;
    term = fixed_mul(term, -x2) / (7 * 8);
    res += term;
    return res;
}

// 复数乘法
Complex16 complex16_multiply(Complex16 a, Complex16 b) {
    Complex16 result;
    result.real = fixed_mul(a.real, b.real) - fixed_mul(a.imag, b.imag);
    result.imag = fixed_mul(a.real, b.imag) + fixed_mul(a.imag, b.real);
    return result;
}

// 复数加法
Complex16 complex16_add(Complex16 a, Complex16 b) {
    Complex16 result = {a.real + b.real, a.imag + b.imag};
    return result;
}

// 复数减法
Complex16 complex16_subtract(Complex16 a, Complex16 b) {
    Complex16 result = {a.real - b.real, a.imag - b.imag};
    return result;
}

// 生成旋转因子
static Complex16 get_twiddle(int k, int n) {
    int16_t angle = -((2 * PI_FIXED * k) / n); // Q13
    Complex16 w;
    w.real = my_cos(angle);
    w.imag = my_sin(angle);
    return w;
}

int bit_length(int n) {
    int count = 0;
    while (n > 1) {
        n >>= 1;
        count++;
    }
    return count;
}

void fft_radix2_iterative(Complex16 *data, int n) {
    int i, j, k, m, n1, n2;
    Complex16 W, data_temp;
    // 位反转重排
    for (i = 1, j = 0; i < n; i++) {
        n1 = n / 2;
        while (j >= n1) {
            j -= n1;
            n1 /= 2;
        }
        j += n1;
        if (i < j) {
            data_temp = data[i];
            data[i] = data[j];
            data[j] = data_temp;
        }
    }
    // 蝶形运算
    m = bit_length(n);
    n1 = 1;
    n2 = 1;
    for (i = 0; i < m; i++) {
        n2 = 2 * n2;
        for (j = 0; j < n1; j++) {
            W = get_twiddle(j * MAX_N / n1, MAX_N);
            for (k = j; k < n; k += n2) {
                data_temp = complex16_multiply(data[k + n1], W);
                data[k + n1] = complex16_subtract(data[k], data_temp);
                data[k] = complex16_add(data[k], data_temp);
            }
        }
        n1 = 2 * n1;
    }
}

#define N 1024
int main()
{
    static Complex16 data[N] = {0};
    clock_t start = clock();
    for (size_t i = 0; i < 10000; i++)
    {
       fft_radix2_iterative(data, N);
    }
    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("程序运行时间: %.6f 秒\n", elapsed);
    return 0;
}