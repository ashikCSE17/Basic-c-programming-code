#include<stdio.h>
int main()

{
    int a, b;
    printf("Enter the two integer: ");
    scanf("%d %d", &a, &b);
    if (a%b==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }


    return 0;

}
