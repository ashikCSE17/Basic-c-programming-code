#include<stdio.h>
int main()
{
    int CP, SP, amt;
    printf("Enter the Cost  Prise: ");
    scanf("%d", &CP);
    printf("Enter the Selling Prise: ");
    scanf("%d", &SP);

    if (SP>CP)

    {
        amt =SP-CP;

        printf("Profit= %d", amt);
    }
    else if (CP>SP)

    {
        amt = CP - SP;
        printf("Loss= %d", amt);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}


