#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charecter: ");
    scanf("%c", &ch);

    if ((ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u') ||(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U'))

    {
        printf("%c is vowel", ch);
    }

    else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is consonent", ch);
    }
    return 0;
}
