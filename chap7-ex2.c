/*
Write a program that reads two string S and T. 
Check if string S contains string T.

Note:
String S is considered to contain string T 
if we can obtain string T by removing x left-most characters 
and y right-most characters out of S (x and y can be 0).
If string S contains string T then output “True” 
else output “False”.

Input Description: 
String S
String T

Output Description: True or False

Example:

Input: abcde
bcd
Output: True

*/
#include<stdio.h>
#include<string.h> 
int main()
{
    // char str[80], search[10];
    // int count1 = 0, count2 = 0, i, j, flag;
 
    // printf("Enter a string:");
    // gets(str);
    // printf("Enter search substring:");
    // gets(search);
    // while (str[count1] != '\0')
    //     count1++;
    // while (search[count2] != '\0')
    //     count2++;
    // for (i = 0; i <= count1 - count2; i++)
    // {
    //     for (j = i; j < i + count2; j++)
    //     {
    //         flag = 1;
    //         if (str[j] != search[j - i])
    //         {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if (flag == 1)
    //         break;
    // }
    // if (flag == 1)
    //     printf("SEARCH SUCCESSFUL!");
    // else
    //     printf("SEARCH UNSUCCESSFUL!");
 
	char a[100], b[100];
	scanf("%s", a);
	scanf("%s", b);
	char *x;
	x=strstr(a, b);
	if(x!=NULL) printf("TRUE\n");
	else{
		printf("FALSE\n");
	}
    return 0;
}