#include <stdio.h>

typedef struct {
	int numer, denom;
}Fraction;

int gcd(int a, int b) {
   	if (a < 0) a = -1 * a;
	if (b < 0) b = -1 * b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
int lcm(int a, int b) {
  return (a / gcd(a,b)) * b;
}

void input(Fraction a[], int n) {
	for(int i = 0; i < n; ++i) {
		printf("Enter fraction%d:\n", i+1);
		do {
			scanf("%d%d", &a[i].numer, &a[i].denom);
			if(a[i].denom == 0) printf("Error! Try again\n");
		} while(a[i].denom == 0);
	}
}

Fraction simplify(Fraction p) {
    p.numer /= gcd(p.numer, p.denom);
    p.denom /= gcd(p.numer, p.denom);
    return p;
}
 
void cal(Fraction a[], int n) {
	Fraction sum;
	sum.numer = 0; sum.denom = 1;
	for(int i = 0; i < n; i++){
		a[i] = simplify(a[i]);
	    int lcmd = lcm(a[i].denom, sum.denom);
	    sum.numer = (lcmd / a[i].denom * a[i].numer) + (lcmd / sum.denom * sum.numer);
	    sum.denom = lcmd;
	}
	printf("\n%d/%d\n", sum.numer, sum.denom);
}

float frac_value(float u, Fraction p){
	u = 1.0*p.numer/p.denom;
	return u;
}
void cal2(Fraction a[], int n, float x) {
	Fraction sum;
	sum.numer = 0; sum.denom = 1;
	for(int i = 0; i < n; i++){
		a[i] = simplify(a[i]);

	    int lcmd = lcm(a[i].denom, sum.denom);
	    sum.numer = (lcmd / a[i].denom * a[i].numer) + (lcmd / sum.denom * sum.numer);
	    sum.denom = lcmd;
	}
	x = frac_value(x, sum);
	printf("%.4f", x);
}
int main()
{
	Fraction p, fract[101]; 
	float u; int n;
	printf("\nEnter n fractions (1<= n <=100): ");
	scanf("%d", &n);
	input(fract, n);
	cal(fract, n);
	cal2(fract, n, u);
	return 0;
}