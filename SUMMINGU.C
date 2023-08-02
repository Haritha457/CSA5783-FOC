#include<stdio.h>
int main()
{
int i,n,sum=0,sign=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
sum-=i;
}
 else
 {
 sum+=i;
 }
 sign*=-1;
 }
 printf("%d",sum);
 return 0;
 }