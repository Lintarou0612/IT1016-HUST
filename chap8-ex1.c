/*
Write a C function that takes a positive integer n as an argument 
and returns the largest power of 2 less than or equal to n.

Input Description : A positive integer n

Output Description : The largest power of 2 less than or equal to n

Example:

Input:

5

Output:
4

*/
#include <stdio.h>
int power(int x, int y){
   	int pow = 1;
    for(int i=1;i<=y;i++)
        pow = x * pow;
    return pow;
}
int count(int n){
    int count=0;
    while(n>=2){
        n=n/2;
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",power(2,count(n)));
    return 0;
}