// Write a C program to check whether a character is alphabet or not.

#include <stdio.h>
int character(int a)
{

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        printf("%c is an alphabet.", a);
    else
        printf("%c is not an alphabet.", a);
}
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    character(a);

    return 0;
}