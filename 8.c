// Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
char check(char vowel, char c)
{
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' ||
             c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (vowel)
    {
        printf("%c is a vowel.", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
}
int main()
{
    char c;
    char vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    check(vowel,c);
    return 0;
}