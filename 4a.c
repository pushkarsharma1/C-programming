// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int divide(int num)
{
   if (num == 0)
   {
      printf("The given number is Zero \n");
   }

   if (num % 5 == 0 && num % 11 == 0 && num != 0)
   {
      printf("The given number is Divisible by 5 and 11  ");
   }

   else
   {
      printf("The given number is not Divisible by 5  and 11 ");
   }
}
int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
   divide(num);
   return 0;
}