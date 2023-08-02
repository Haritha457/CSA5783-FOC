#include<stdio.h>
int main()
{
	int a,b,n,next;
	printf("enter the number:");
	scanf("%d",&n);
	printf("fibinocii:");
	printf("0 1");
	a=0;
	b=1;
	next =a+b;
	while(next<=n)
	{
		printf("%d",next);
		a=b;
		b=next;
		next =a+b;
	}
	return 0;
}
