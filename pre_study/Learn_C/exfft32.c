#include <time.h>
#include <stdio.h>
#include <stdint.h>

#define MAX_N 1024
#define PI_FIXED 25736 // 3.14159265358979323846 * (1 << 13) ≈ 25736
#define FRACTIONAL_BITS 23

typedef struct {
    int32_t real;
    int32_t imag;
} Complex32;

// 定点乘法（Q19.13）
static int32_t fixed_mul(int32_t a, int32_t b) {
    return (int32_t)(((int64_t)a * b) >> FRACTIONAL_BITS);
}

// 泰勒展开5级的sin，输入x为Q13，返回Q13
int32_t my_sin(int32_t x) {
    int32_t x2 = fixed_mul(x, x);
    int32_t res = x;
    int32_t term = x;
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
int32_t my_cos(int32_t x) {
    int32_t x2 = fixed_mul(x, x);
    int32_t res = (1 << FRACTIONAL_BITS);
    int32_t term = (1 << FRACTIONAL_BITS);
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
Complex32 complex32_multiply(Complex32 a, Complex32 b) {
    Complex32 result;
    result.real = fixed_mul(a.real, b.real) - fixed_mul(a.imag, b.imag);
    result.imag = fixed_mul(a.real, b.imag) + fixed_mul(a.imag, b.real);
    return result;
}

// 复数加法
Complex32 complex32_add(Complex32 a, Complex32 b) {
    Complex32 result = {a.real + b.real, a.imag + b.imag};
    return result;
}

// 复数减法
Complex32 complex32_subtract(Complex32 a, Complex32 b) {
    Complex32 result = {a.real - b.real, a.imag - b.imag};
    return result;
}

// 生成旋转因子
static Complex32 get_twiddle(int k, int n) {
    int32_t angle = -((2 * PI_FIXED * k) / n); // Q13
    Complex32 w;
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

void fft_radix2_iterative(Complex32 *data, int n) {
    int i, j, k, m, n1, n2;
    Complex32 W, data_temp;
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
                data_temp = complex32_multiply(data[k + n1], W);
                data[k + n1] = complex32_subtract(data[k], data_temp);
                data[k] = complex32_add(data[k], data_temp);
            }
        }
        n1 = 2 * n1;
    }
}

#define N 1024
int main()
{
    static Complex32 data[N] = {0};
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