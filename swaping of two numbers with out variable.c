#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a and b value are %d%d",a,b);
}
