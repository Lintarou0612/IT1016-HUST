/*
Write a program that reads two matrices: 

Matrix X of size M*N (M rows, N columns). 

Matrix Y of size N*K (N rows, K columns). 

Do multiplication of matrices X and Y, store the result in matrix Z (Z=X*Y)
note: First line contains 3 numbers M, N, K.
VD:
input: 
2 3 2

2 2 2
1 1 1

2 2
1 1
3 3

output:
12 12
6 6
*/
#include <stdio.h>

void inputa(int a[][100], int m, int n) {
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void inputb(int b[][100], int n, int p) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < p; j++)
            scanf("%d", &b[i][j]);
}
void output(int c[][100], int m, int p) {
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}
int main() {
    int a[100][100], b[100][100], mul[100][100];
    int m, n, p;
    scanf("%d%d%d", &m, &n, &p);
    if (m <= 0 || n <= 0 || p <= 0) printf("Error");
    else {
        inputa(a, m, n);
        inputb(b, n, p);
        for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++){
            mul[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
        output(mul, m, p);
    }
    return 0;
}