/*Problems: Write function prime that indicates an integer N 
is a prime number or not (return 1 if N is prime and 0 otherwise)

Read m integers. Calculate and print average of prime numbers 
using function prime Description input: 
The first line contains a positive integer m. 
The second line contains m integers

Description output:
Average of prime numbers in m integers using function prime. 
If there is no prime number, print “Error”

Example:

Input:

3

1 2 3

Output:

2.5
*/
#include <stdio.h>
void input(int a[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
}
int check(int n) {
	int i, flag = 1;
	for (i = 2; i <= n / 2; ++i) {
		if (n % i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}
int list(int a[], int n) {
	int count = 0;
	for (int i =0; i < n; i++) {
		if (check(a[i]) == 1 && a[i] > 1)
			count++;
	}
	return count;
}
void prime(int a[], int n) {
	int sum = 0, count = 0;
	for(int i = 0; i < n; ++i) {
		if (check(a[i]) == 1 && a[i] > 1){
			sum += a[i];
			count++;
		}
	}
	float result = (float)sum/count;
	printf("\n%f", result);
}
int main() {
	int a[1000], n;
	scanf("%d", &n);
	if (n <= 0 || n > 1000) printf("Error\n");
	else {
		input(a, n);
		if(list(a, n) > 0) prime(a, n);
		else printf("Error\n");
	}
	return 0;
}
