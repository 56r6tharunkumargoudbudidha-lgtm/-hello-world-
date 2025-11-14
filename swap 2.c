#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping %d%d",a,b);
}
