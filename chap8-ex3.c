#include<stdio.h>
#include<math.h>
	
float fx(float x) {
	if(x < 0) return cos(4.5*x*x)+ 5*sin(x*x*x-1);
	else if (x == 0) return 7;
	else return log2(x)+ sqrt(x*x+5);
}

void output(float z[], int size) {
	int i; 
	for (i=0; i < size; i++) 
		printf("%f ", z[i]); 
} 

int main() {
	int i, j, n, k=0;
	float x[204], y[204], z[204], sum = 0,temp;
	scanf("%d",&n);
	if(n<1 || n>20) printf("Error");
	else {
		for(i=0; i<204; i++) {
			x[i]= i*0.5-1.5;
			y[i]= fx(x[i]);
			if (y[i] > n) {
				z[k]= y[i];
				sum += z[k];
				k++;
			}
		}
		printf("%f\n", sum);
		for(i=0; i<k; i++)
		for(j=i+1; j<k; j++) {
			if (z[i]>z[j]) {
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
		output(z, k);
	}
	return 0;
}
