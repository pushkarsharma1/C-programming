// Write a C program to find maximum between three numbers.

#include <stdio.h>
int max(int num1, int num2, int num3)
{

  if (num1 > num2)
  {
    if (num1 > num3)
    {
      printf("%d is maximum", num1);
    }
    else
    {
      printf("%d is maximum", num3);
    }
  }

  if (num2 > num3)
  {
    if (num2 > num1)
    {
      printf("%d is maximum", num2);
    }
    else
    {
      printf("%d is maximum", num1);
    }
  }
  if (num3 > num1)
  {
    if (num3 > num2)
    {
      printf("%d is maximum", num3);
    }
    else
    {
      printf("%d is maximum", num2);
    }
  }

  if (num1 == num2 == num3)
  {
    printf("All are equal");
  }
}
int main()
{
  int num1, num2, num3;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  printf("Enter third number: ");
  scanf("%d", &num3);
  max(num1, num2, num3);
  return 0;
}