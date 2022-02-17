#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("enter the integer");
	scanf("%d",&n);
	if (n<0)
	{
		printf("factorial doesnt exist");
	}
	else
	{
		for (i=1;i<=n;++i)
		{
			fact*=i;
		}
		printf("factorial of %d is %d",n,fact);
		
			
	
	}
	return 0;
}
