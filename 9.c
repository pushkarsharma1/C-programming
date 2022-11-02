// Write a C program to input any character and check whether it is alphabet,
// digit or special character.
#include <stdio.h>
char check(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c is an alphabet.", a);
    }
    else if (a >= '0' && a <= '9')
    {
        printf("'%c' is digit.", a);
    }
    else
    {
        printf("'%c' is special character.", a);
    }
}
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    check(a);
    return 0;
}