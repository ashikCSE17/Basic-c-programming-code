#include<stdio.h>
int main()
{
    int year;
    printf("Enter The Year: ");
    scanf("%d", &year);
    if ((year%4==0 && year%100 !=0 )||(year%400==0))
        {
            printf("The year is leap Year");
        }
    else
        {
            printf("The year is not leap year");
        }
            return 0;

}

