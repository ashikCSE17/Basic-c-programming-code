

#include<stdio.h>
int main()
{
    int a, b, c,d;
    printf("Enter the numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a<b && a<c && a<d)
    {
        printf("%d is minimum number", a);
    }
    else if (b<a && b<c && b<d)
    {
        printf("%d is minimum number", b);

    }

    else if (c<a && c<b && c<d)
    {
        printf("%d is minimum number", c);
    }
    else
        printf("%d is minimum number", d);
        return 0;

}
