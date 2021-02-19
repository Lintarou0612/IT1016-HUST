/*Write a program that asks the user to type an integer and writes "YOU WIN"  
if the value is between 56 and 78 (both included). In the other case it writes "YOU LOSE".
Nested if statements*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n>=56 && n<=78) 
    {
        printf("YOU WIN");
    }
    else
    {
        printf("YOU LOSE");
    }
    
}