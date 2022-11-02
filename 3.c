// Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int check(int num)
{
   if (num < 0)
   {
      printf("The given number is Negative");
   }
   if (num > 0)
   {
      printf("The given number is Positive");
   }
   if (num == 0)
   {
      printf("The given number is Zero");
   }
}
int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
   check(num);
   return 0;
}