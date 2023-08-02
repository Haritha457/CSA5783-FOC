#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
int cube=i*i*i;
sum+=cube;
}
printf("%d",sum);
return 0;
}