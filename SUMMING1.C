#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
long long sum=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
long long term= pow(i,i);
sum+=term;
}
printf("%d",sum);
return 0;
}