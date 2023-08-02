#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the number:");
scanf("%d",&n);
printf("sum of series:");
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("%d",sum);
return 0;
}