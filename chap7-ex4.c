/*
Write a program that reads two strings S and T. 
Count the number of times that each character appears in both strings.

Note: First output a string of distinct characters in both strings. 
Then, for each of those characters output the number of its occurrences in both strings.

Input Description: 
String S
String T

Output Description: 
In line 1, a string of distinct characters that appear in S or T. 
(Sort these characters in ascending order according to their ASCII value).
From line 2, on each line is the number of a character ’s occurrences 
(according to the order in the string on line 1).

Example:
Input: aabbaacc
abbbcaa
Output: abc
7
5
2 
*/

#include <stdio.h>
#include <string.h>

void sort(char c[]) {
    for(int i=0;i<strlen(c)-1;i++)
        for(int j=i+1;j<strlen(c);j++)
            if(c[i]>c[j]) {
                char temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
}
void character(char a[], char c[]) {
    int n=0;
    char flag=0;
    for(int i=0;i<strlen(a);i++) {
        if(a[i]!=flag) {
            char temp=a[i];
            c[n]=temp;
            n++;
            flag=a[i];
        }
    }
    printf("%s\n",c);
    
}
void count(char a[], int n) {
	char flag = a[0];
	int j=0, count[100]={0};
	for(int i=0; i<strlen(a); ++i){
		if(a[i] == flag) count[j]++;
		else {
			flag = a[i];
			j++;
			count[j]++;
		}
	}
	for(int i=0; i<n; ++i)
		printf("%d\n", count[i]);
}	
int main() {
	char a[100], b[100], c[100];
	scanf("%s", a);
	scanf("%s", b);
	strcat(a,b); //ghép 2 chuoi a,b 
	sort(a);
	character(a,c);
	count(a, strlen(c));

	return 0;
}
