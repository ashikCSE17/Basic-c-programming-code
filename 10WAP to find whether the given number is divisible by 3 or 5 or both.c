#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);



    if (num%2==0)


    {
     printf("Th number is Divisible by 3\n");
    }






     else if (num%5==0)
    {
        printf("The number is Divisible by 5");
    }


    if (num%3==0)
     {

        if(num%5==0)
        {
             printf("The number is divisible by bote 3 and 5");
        }
        else
       {
        printf("The number is not divisible by 3 and 5");
       }


    }





    return 0;
}
