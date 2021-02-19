/*
Write a program that read a string S and an integer N. 
Shorten the string so that it only contains the first N character.

Note: If the string has less than N characters then do not change it
Input Description: 
First line contains string S.
Second line contains an integer N.

Output Description:
String S after being shortened.

Example:

Input: abcde
3
Output: abc 
*/
#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char str[100];
    fgets(str, sizeof(str), stdin);
    scanf("%d", &n);
    int length = strlen(str) - 1;
    if(length <= n)
    	puts(str);
    else {
    	str[n] = '\0';
    	printf("%s", str);
    }
    return 0;
}