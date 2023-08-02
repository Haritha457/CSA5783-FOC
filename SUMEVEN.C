#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the number:");
scanf("%d",&n);
printf("sum of even series");
for(i=2;i<=n;i+=2)
{
sum+=i;
}
printf("%d",i);
return 0;
}