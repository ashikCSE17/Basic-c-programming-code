#include<stdio.h>
int main()
{
    int number, reminder;
    printf("Enter The Number: ");
    scanf("%d", &number);

    reminder = number % 2;

    if (reminder == 0)
    {
        printf("The number is even");
    }

    else
    {
        printf("THe number is odd");
    }
    return 0;
}

