
//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=2; i<=2*n; i+=2)
       sum+=i;
    printf("%d even number sum is: %d",n,sum);
    return 0;
}
