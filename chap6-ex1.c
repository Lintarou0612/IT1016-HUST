/*
Input:

5

1 4 3 5 2

Output: 1 2 3 4 5
*/
#include <stdio.h>
void input(int a[], int n) {
	for(int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
}
void output(int a[], int n) {
	for(int i = 0; i <n; ++i)
		printf("%d ", a[i]);
}
void sort(int a[], int n) {
	int min, temp;
	for(int i = 0; i < n-1; ++i) {
		min = i;
		for(int j = i+1; j < n; ++j) {
			if(a[j] < a[min])
				min = j;
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
int main() {
	int a[100], n;
	scanf("%d", &n);
	if(n <= 0 || n > 100) printf("Error");
	else {
		input(a, n);
		sort(a, n);
		output(a, n);
	}
	return 0;
}