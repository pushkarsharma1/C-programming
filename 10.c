// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
int character(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        printf("%c is lowercase alphabet.", a);
    }
    else
    {
        printf("%c is uppercase alphabet.", a);
    }
}

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    character(a);

    return 0;
}