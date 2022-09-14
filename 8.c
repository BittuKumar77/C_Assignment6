//8. Write a program to check whether a given number is a Prime number or not

#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter numbers: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
        if (num % i == 0)
            break;
    if (i == num / 2 + 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
    return 0;
}
