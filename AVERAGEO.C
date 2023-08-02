#include<stdio.h>
int main()
{
int n,num,sum=0,i;
float average;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the number %d:",i);
scanf("%d",&num);
sum+=num;
}
average=sum/n;
printf("sum=%d\n",sum);
printf(" average=%.2f\n",average);
return 0;
}
