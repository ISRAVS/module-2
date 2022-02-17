#include<stdio.h>
int main()
{
	int a=1900,b=2020;
	for(a=1900;a<b;a+=4);
	printf("the leap years are %d",a);
	return 0;
}
