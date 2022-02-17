#include<stdio.h>
int main()
{
    int a;
    printf("enter the number ", a);
    scanf("%d" , &a);
    if (a%5==0 && a%11==0)
    {
        printf("the number is divsible by 5 and 11");
    }
    else
    {
        printf("the number is not divisible by one of them ");
    }
    return 0;
}
