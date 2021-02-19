/*Write a program that read two strings S and T and an integer N. 
Check if string T occurs in the suffix of S starting at position N.

Note:
Strings is indexed from 0.
The suffix of S starting at position N is 
the last |S|-N characters of S. |S| is the length of S.

Input Description: 
String S
String T
Integer N

Output Description: Print “1” if string T occurs in string S 
after position N, else print “0”.

Example:
Input: abcdbca
bc
4 
Output: 1
*/
#include <stdio.h>
#include <string.h>

int main() {
	char a[100], b[100], c[100]={0};
    int n, j=0;
	scanf("%s", a);
	scanf("%s", b);
    fflush(stdin);
    scanf("%d", &n);
	for(int i=n; i<strlen(b)+n; i++) {
          c[j] = a[i];
          j++;
    }
    if(strcmp(c,b)==0)
        printf("1");
    else
        printf("0");
	return 0;
}