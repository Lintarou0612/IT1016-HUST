#include <stdio.h>

typedef struct {
	char name[30], sex[4];
	int birthYear, birthMonth;
	float weight;

}Baby;

void inputN(Baby B[], int n){
    printf("____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nEnter baby%d:\n", i+1);
        printf("Enter name: "); getchar(); gets(B[i].name); 
	    printf("Enter birthmonth: "); scanf("%d", &B[i].birthMonth); fflush(stdin); 
	    printf("Enter birthyear: "); scanf("%d", &B[i].birthYear); fflush(stdin); 
	    printf("Enter sex: "); scanf("%s", B[i].sex); fflush(stdin); 
	    printf("Enter weight: "); scanf("%f", &B[i].weight);  
    	if(B[i].weight == 0) break;
    }
    printf("____________________________________\n");
}
void output(Baby b) {
	printf("%-30s%-10.2f%4s\n", b.name, b.weight, b.sex);
}

void find(Baby B[], int n, int m, int y) {
	Baby b;
	printf("%-30s%-10s%4s\n","Name","Weight","Sex");
	for(int i = 0; i < n; ++i) 
		if(m == B[i].birthMonth && y == B[i].birthYear) 
			output(B[i]);
}
int check(Baby B[], int n, int m, int y) {
	int count = 0;
	Baby b;
	for(int i = 0; i < n; ++i) 
		if(m == B[i].birthMonth && y == B[i].birthYear) 
			count++;
	return count;
}
int main() {
	Baby B[100];
	int n;
	printf("\nEnter n babies (1<= n <=10): ");
	scanf("%d", &n);
	inputN(B, n);
	int m, y;
	printf("\nEnter month M (1<= M <= 12): ");
	scanf("%d", &m); 
	printf("Enter month Y (2000<= M <= 2009): ");
	scanf("%d", &y);
	if(check(B, n, m, y) > 0)
		find(B, n, m, y);
	else printf("No baby was born in the month M/Y");
	return 0;
}