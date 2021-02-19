#include <stdio.h>
#include <math.h>

float H(float x,float y){
	if(x<y-2) return 3*x*x-log(y);
	else if(y-2<=x && y+2>=x) return (x+y)/2+8;
	else return y*y*y+2*sin(x);
}
int main(){
	float B[1000],x[1000],y[1000],temp;
	int i, j;
	for(i=0; i<17; i++){
		x[i]=i*0.5-2;
	}
	for(i=0; i<17; i++){
		y[i]=5-i;
	}
	for(i=0; i<17; i++) B[i]=H(x[i], y[i]);

	for(i=0; i<17; i++){
		for(j=i+1; j<17; j++){
			if(B[i]>B[j]){
				temp = B[i];
				B[i] = B[j];
				B[j] = temp;
			}
		}
	}
	for(i=0; i<17; i++) printf("%f ",B[i]);
}