//6. Write a program to calculate factorial of a number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    printf("%d factoral is: %d", n, fact);
    return 0;
}
