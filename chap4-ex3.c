/* tính n dấu căn
Write a program that asks the user to type the values of x and n and compute the following
expressions*/

#include <stdio.h>
#include <math.h>

void n_square_root(int n, double x) {
    double sum = 0;
    int i;
    for (i = 1; i <= n; ++i) {
        sum = sqrt(x + sum);
    }
    printf("S = %.4lf\n", sum);
}

void sum1(int n, double x) {
    double sum = 0;
    int i;
    for (i = 1; i <= n; ++i) {
        sum += (double)pow(x, i) / i;
    }
    sum++;
    printf("S = %.4lf\n", sum);
}

void sum2(int n, double x) {
    double sum = 0;
    long long mult = 1;
    int i;
    for ( i = 1; i <= n; ++i) {
        mult *= i;
        sum += (double)pow(x, i) / mult;
    }
    sum++;
    printf("S = %.4lf\n", sum);
}

void sum3(int n, double x) {
    double sum = 0;
    int i;
    long long mult = 1;
    for ( i = 1; i <= n; ++i) {
        mult *= i;
        sum += pow(-1, i) * (double)pow(x, i) / mult;
    }
    sum++;
    printf("S = %.4lf\n", sum);
}

int main() {
    int n; double x;
    scanf("%d", &n);
    scanf("%lf", &x);
    if (n <= 0) printf("Enter n > 0 again!");
    else {
        n_square_root(n, x);
        sum1(n, x);
        sum2(n, x);
        sum3(n, x);
    }
    return 0;
}