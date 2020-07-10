#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter thte number: ");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("%d is maximum Number", a);
    }
    else
    {
        printf("%d is maximum number", b);
    }
    return 0;
}
