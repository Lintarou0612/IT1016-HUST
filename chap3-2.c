#include <stdio.h>

int main() {
	int n, i, j, k;
	printf("Input an odd number N: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			printf("Size of triangle: %d\n",i);
			int z = n / 2 + 1;
			for (j = i / 2; j >= 0; j--) { // row
				for(k = 1; k <= n; k++) {
					if(k >= z - j && k <= z + j) {
                            printf("*");
                    } else {
                            printf(" ");
                    	}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}
