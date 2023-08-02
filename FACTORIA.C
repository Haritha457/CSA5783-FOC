#include<stdio.h>
int main()
{
int i,n,product=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
product*=i;
}
printf("\n %d",product);
return 0;
}