#include <stdio.h>
#include <string.h>
//khong dung ham dao nguoc chuoi
void reverse(char s[]) {
	int n;
	char tempt;
	n = strlen(s) - 1;
	for(int i = 0; i < n / 2; ++i) {
		tempt = s[i];
		s[i] = s[n-i];
		s[n-i]= tempt;
	}
}
const char x[] = {'0', '1'}; 
int main() {
	unsigned long long n;
	scanf("%llu", &n);
	char s[100];
	if (n == 0) printf("0\n");
	else {
		int i = 0;
		while(n) {
			int tempt = n % 2;
			n /= 2;
			s[i++] = x[tempt];
		}
		s[i] = '\0';
		reverse(s); //nếu muốn đơn giản thì dùng hàm strrev(s);
		puts(s);
	}
	return 0;
}