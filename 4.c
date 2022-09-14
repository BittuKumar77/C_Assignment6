//4. Write a program to calculate sum of squares of first N natural numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a numbers: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i * i;
    printf("%d odd number sum is: %d", n, sum);
    return 0;
}
