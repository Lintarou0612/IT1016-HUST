#include <stdio.h>

void input(double a[], int n) {
	for (int i = 0; i < n; ++i) 
		scanf("%lf", &a[i]);
}
void output(double a[], int n) {
	for (int i = 0; i < n; ++i)
		printf("%.1lf ", a[i]);
}

void addElement(double a[], int *n, double x, int k) { 
	if(k > *n) k = *n + 1;
	for (int i = *n-1; i >= k-1; i--) {
		a[i+1] = a[i];
	}
	a[k-1] = x;
	++*n;
}
int main() {
	double a[100];
	int n;
	scanf("%d", &n);
	if (n <= 0 || n > 100)
		printf("Error\n");
	else {
        input(a, n);
    	int k;
        double x;
    	scanf("%d", &k);
    	scanf("%lf", &x);
    	if (k < 0 || k > n + 1) {
    	    printf("Error\n");
    	}
    	else {
    	    addElement(a, &n, x, k);
    	    output(a, n);
    	}
	}
	return 0;
}