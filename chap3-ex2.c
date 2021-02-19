/*
Input an odd number N: 5
Size of triangle: 1
  *

Size of triangle: 3
 ***
  *

Size of triangle: 5
*****
 ***
  *
*/
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; ++i) {
		if(i % 2 == 1) {
			printf("Size of triangle: %d\n", i);
			int row = i / 2;
			int mid = n/2 + 1; // vi tri * chinh giua
			for(int j = row; j >= 0; --j) {
				for(int k = 1; k <= n; ++k) { // tinh so * va space
					if(k >= (mid-j) && k <= (mid+j))
						printf("*");
					else printf(" ");
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}
