#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter thte number: ");
    scanf("%d %d", &a, &b);

    if (a<b)
    {
        printf("%d is minimum Number", a);
    }
    else
    {
        printf("%d is minimum number", b);
    }
    return 0;
}
