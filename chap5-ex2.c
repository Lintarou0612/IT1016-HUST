/*
Compute the maximum value of an array. 
Return the index of the maximum value in an array.

Input Description: The first line contains a positive integer n, 
which is the length of the input array. 
The second line contains n elements of the array.

Output Description: The index of the maximum value in an array. 
If there are 2 or more elements with the same value as the maximum value, 
print all the indices of those number out, separated by spaces.
Note:
Value in an array count from 0
If n <= 0 print "Error"
Example:
Input:
5
1 2 3 5 4
Output: 3
*/
#include <stdio.h>

void input(float a[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		scanf("%f", &a[i]);
	}
}

float maxValue(float a[], int n) {
	int i;
	float max = a[0];
	for( i = 1; i < n; ++i) {
		if (a[i] > max)
			max = a[i];	
	}
	return max;
}

int main() {
	float a[1000];
	int n;
	scanf("%d", &n);
	if (n <= 0)
		printf("Error\n");
	else {
		input(a, n);
		float max = maxValue(a, n);
		int i;
		for (i = 0; i < n; ++i) {
			if (a[i] == max)
				printf("%d ", i);
		}
	}
	return 0;
}