// Write a C program to input month number and print number of days in that month.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter month number ");
    scanf("%d", &num);


    if(num == 1 || num==3 || num==5 || num==7 || num==8 ||num==10 || num==12)
    {
        printf("Number of Days= 31");
    }
    else if(num == 2)
    {
        printf("Number of Days in month = 28");
    }
    else if(num == 4 || num==6 || num==9 || num==11)
    {
        printf("Number of Days = 30");
    }
    else
    {
        printf("Please enter week number between 1 to 7");
    }

}