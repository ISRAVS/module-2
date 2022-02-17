#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers " , a, b, c);
    scanf("%d\n%d\n%d\n" ,&a ,&b , &c);
    if (a<b<c)
    {
        printf("a is minimum ");
    }
    else if (a<b>c)
    {
        printf("b is minimum ");
    }
     else 
    {
        printf("c is minimum ");
    }
    return 0;
}
