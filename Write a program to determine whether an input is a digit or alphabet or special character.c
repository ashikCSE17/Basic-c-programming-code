#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the  charecter: ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("The charecter is Alphabate");
    }

    else if (ch>='0' && ch<='9')
    {
        printf("The charecter is Digit");
    }

    else
    {
        printf("The charecter is special");
    }
    return 0;
}
