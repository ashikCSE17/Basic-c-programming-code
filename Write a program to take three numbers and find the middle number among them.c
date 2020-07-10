#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a>b && a<c) || (a<b && a>c))
    {
        printf("%d is middle Number", a);
    }

    else if ((b>a && b<c) || (b<a && b>c))
    {
        printf("%d is middle NUmber", b);
    }
    else
    {
        printf("%d is middle Number", c);
    }
    return 0;
}
