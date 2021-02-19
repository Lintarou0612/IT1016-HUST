#include <stdio.h>

void car (char n) {
	if (n == 'l' || n == 'L') {
		printf("A LIFAN car costs 100$\n");
	} else if (n == 'd' || n == 'D') {
		printf("A DAEWOO car costs 200$\n");
	} else if (n == 'f' || n == 'F') {
		printf("A FORD car costs 300$\n");
	} else if (n == 't' || n == 'T') {
		printf("A TOYOTA car or a BMW car costs 500$\n");
	} else if (n == 'p' || n == 'P') {
		printf("A PORSCHE car costs 1000$\n");
	} else if (n == 'v' || n == 'V') {
		printf("A VOLGA costs nothing\n");
	} else {
		printf("Error\n");
	}
}
int main() {
	char n, i;
	printf("What kind of your car?\n");
	scanf("%c", &n);
	car(n);
	printf("Do you want to insure another car?\n");	
	printf("Enter y or n: ");
	scanf("%s", &i);
	while (i == 'y' || i == 'Y') {
		printf("What kind of your car?\n");
		scanf("%s", &n);
		car(n);
		printf("Do you want to insure another car?\n");
		printf("Enter y or n: ");
		scanf("%s", &i);
		}
	printf("Thank you");
	return 0;
}

