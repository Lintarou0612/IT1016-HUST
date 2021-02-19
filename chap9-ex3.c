#include <stdio.h>
#include <string.h>

typedef struct 
{ 
char name[25]; // name of book
char auth[30]; // name of author
int price; // price of the book. Unit: USD $
}book_info;

void lowestCost(book_info books[], int n) {

	int min = books[0].price;
	for(int i = 1; i < n; ++i) {
		if(books[i].price < min)
			min = books[i].price;
	}
	printf("%-25s  %-30s%8s\n","Name","Author","Price");
	for(int i = 0; i < n; ++i) 
		if(books[i].price == min)
			printf("%-25s  %-30s%8d\n", books[i].name, books[i].auth, books[i].price);
}
void find(book_info books[], int n, char nameAuth[]) {
	int j = 0;
	printf("%-2s  %-25s%8s\n","No.","Name","Price");
	for(int i = 0; i < n; i++) {
		if(strcmp(nameAuth, books[i].auth) == 0) {
			j++;
			printf("%-2d  %-25s%8d\n", j, books[i].name, books[i].price);
		}
	}
}
int check(book_info books[], int n, char nameAuth[]) {
	int count = 0;
	book_info b;
	for(int i = 0; i < n; ++i) 
		if(strcmp(nameAuth, books[i].auth) == 0) 
			count++;
	return count;
}
int main() {
	book_info books[50];
	int n = 0;
	for(int i = 0; i < 50; ++i) {
		printf("\nBook%d:\n", i+1);
        printf("Enter name of the book: "); fflush(stdin); gets(books[i].name); 
        if(strlen(books[i].name) == 0 || i == 50) break;
	    printf("Enter name of author: "); fflush(stdin); gets(books[i].auth); 
	    printf("Enter price of the book: "); scanf("%d", &books[i].price);
	    n++;  
	}
	lowestCost(books, n);

	char nameAuth[30];
	printf("Enter name of author: ");
	gets(nameAuth);
	if(check(books, n, nameAuth) > 0)
		find(books, n, nameAuth);
	else printf("No information on books written by author %s", nameAuth);
	return 0;
}