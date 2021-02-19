#include <stdio.h>

void input(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
}
void output(int a[], int n) {
	int sum = 0;
	for (int i = n - 1; i >= 0; --i) {
		printf("%d ", a[i]);
		sum += a[i];
	}
	printf("\n%d", sum);
}
int main() {
	int a[100];
	int n;
	scanf("%d", &n);
	if (n <= 0 || n > 100)
		printf("Error\n");
    else {
	input(a, n);
	output(a, n);
    }
	return 0;
}