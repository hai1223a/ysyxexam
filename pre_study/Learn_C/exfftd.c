#include <time.h>
#include <stdio.h>

#define MAX_N 1024
#define PI 3.14159265358979323846

typedef struct {
    double real;
    double imag;
} ComplexD;

// 泰勒展开5级的sin
double my_sin(double x) {
    double x2 = x * x;
    double res = x;
    double term = x;
    term *= -x2 / (2 * 3);
    res += term;
    term *= -x2 / (4 * 5);
    res += term;
    term *= -x2 / (6 * 7);
    res += term;
    term *= -x2 / (8 * 9);
    res += term;
    return res;
}

// 泰勒展开5级的cos
double my_cos(double x) {
    double x2 = x * x;
    double res = 1.0;
    double term = 1.0;
    term *= -x2 / (1 * 2);
    res += term;
    term *= -x2 / (3 * 4);
    res += term;
    term *= -x2 / (5 * 6);
    res += term;
    term *= -x2 / (7 * 8);
    res += term;
    return res;
}

// 复数乘法
ComplexD complexd_multiply(ComplexD a, ComplexD b) {
    ComplexD result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// 复数加法
ComplexD complexd_add(ComplexD a, ComplexD b) {
    ComplexD result = {a.real + b.real, a.imag + b.imag};
    return result;
}

// 复数减法
ComplexD complexd_subtract(ComplexD a, ComplexD b) {
    ComplexD result = {a.real - b.real, a.imag - b.imag};
    return result;
}

// 生成旋转因子
static ComplexD get_twiddle(int k, int n) {
    double angle = -2.0 * PI * k / n;
    ComplexD w;
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

void fft_radix2_iterative(ComplexD *data, int n) {
    int i, j, k, m, n1, n2;
    ComplexD W, data_temp;
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
                data_temp = complexd_multiply(data[k + n1], W);
                data[k + n1] = complexd_subtract(data[k], data_temp);
                data[k] = complexd_add(data[k], data_temp);
            }
        }
        n1 = 2 * n1;
    }
}

#define N 1024
int main()
{
    static ComplexD data[N] = {0};
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