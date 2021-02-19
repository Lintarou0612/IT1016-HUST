#include <stdio.h>
void input(int a[], int n) {
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
}
void output(int a[], int n, long long x) {
    int flag = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] == x)
            flag = 1;
    }
    if(flag == 0) printf("%lli is not in the array", x);
    else  printf("%lli is in the array", x);
}
int main() {
    int a[10000], n;
    scanf("%d", &n);
    input(a, n);
    long long x;
    scanf("%lli", &x);
    output(a, n, x);

    return 0;
}