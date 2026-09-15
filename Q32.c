//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int n, rem, m, sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    m=n;
    while(n>0)
    {
        rem = n%10; 
        n=n/10;
        sum= (sum*10)+rem;
    }
    if(m==sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    return 0;
}