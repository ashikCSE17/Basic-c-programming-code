#include<stdio.h>
int main()
{
    int i, A, B;
    scanf("%d %d", &A, &B);

    for(i=A; i<=B; i++)
    {
       if(i>0)
       {
           printf("%d", i++);
       }
    }


    return 0;
}
