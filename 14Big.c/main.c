#include<stdio.h>
int main()
{

    char ch;

    printf("Enter the charecter: ");
    scanf("%c", &ch);

    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("The charecter is Letter\n");

        if (ch>='a' && ch<='z')
        {
            printf("The charecter is Lowercase Letter\n");
        }
        else if (ch>='A' && ch<='Z')
        {
            printf("The charecter is Uppercase Letter\n");
        }


    }
    else if(ch=>'0' && ch<='9')
    {
        printf("The charecter is digit\n");


            if (ch%2==0)
            {
                printf("The Digit is even\n");
            }
            else
            {
                printf("The Digit is odd\n");
            }


    }

    return 0;
}
