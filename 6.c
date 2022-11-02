// Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int year(int num)
{
   if (num == 0)
   {
      printf("The given number is Zero");
   }
   if (num % 4 == 0 && num != 0)
   {
      if (num % 100 == 0)
      {
         if (num % 400 == 0)
         {
            printf("The given Year is Leap Year ");
         }
         else
         {
            printf("The given Year is not a Leap Year 1 ");
         }
      }
      else
      {
         printf("The given Year is Leap Year 2 ");
      }
   }
   else
   {
      printf("The given Year is not a Leap Year 3 ");
   }
}
int main()
{
   int num;
   printf("Enter the Year: ");
   scanf("%d", &num);
   year(num);
   return 0;
}