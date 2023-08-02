#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the number:");
scanf("%d",&n);
for(i=2;i<=n;i+=2)
{
int term=(i*i);
sum+=term ;
}
printf("%d",sum);
return 0;
}