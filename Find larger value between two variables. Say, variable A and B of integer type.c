#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    if (A > B)
    {
        printf("%d is greater than %d", A, B);
    }

    else if (B > A)
    {
        printf("%d is greater than %d", B, A);

    }
    else if (A = B)
    {
         printf("%d is equal to %d", A, B);
    }
    return 0;

}

