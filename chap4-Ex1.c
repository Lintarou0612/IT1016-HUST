/*nhập các số thực đến khi nhập số < 1 thì tính trung bình cộng của chúng (ko tính số < 1)*/

#include <stdio.h>

int main()
{
    float n, sum = 0, avg; 
	int count = 0;
	scanf("%f", &n);
	float n1=n;
	if (n < 1) printf("Error");
	else {
		while (1) {
	    	scanf("%f", &n);
	    	if ( n < 1) {
	    		break;
			} else {
				sum += n;
				count++;
			}
		}
		avg = (float)(sum+n1) / (count+1);
	    printf("%.4f", avg);
	}
    return 0;
}


