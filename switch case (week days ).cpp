#include<stdio.h>
int main()
{
    int n,m,t,w,th,f,s,su;
    printf("enter the number" , n);
    scanf("%d" , &n);
    switch (n)
    {
        case 1:
        n=1;
        printf("monday " , m);
        break ;
        case 2:
        n=2;
        printf("tuesday" , t);
        break;
        case 3:
        n=3;
        printf("wednesday " , w);
        break;
        case 4:
        n=4;
        printf("thursday " , th);
        break;
        case 5:
        n=5;
        printf("friday" , f);
        break ;
        case 6:
        n=6;
        printf("saturday" , s);
        break ;
        case 7:
        n=7;
        printf("sunday" , su);
        break ;
        default :
    printf("enter the valid number ");
    }
    return 0;
    
}
