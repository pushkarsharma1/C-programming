// Write a C program to find maximum between two numbers.
#include <stdio.h>
int max(int num1, int num2)
{

    if (num1 > num2)
    {
        printf("%d is maximum", num1);
    }

    if (num2 > num1)
    {
        printf("%d is maximum", num2);
    }

    if (num1 == num2)
    {
        printf("Both are equal");
    }
    return 0;
};
int main()
{
    int num1, num2;
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    max(num1, num2);
    return 0;
}
