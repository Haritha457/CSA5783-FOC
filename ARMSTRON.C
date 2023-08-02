#include<stdio.h>
#include<math.h>
int main()
{
int number,originalnumber,reminder,result=0,n=0;
printf("enter the number:");
scanf("%d",&number);
originalnumber=number;
while(originalnumber!=0)
{
originalnumber/=10;
n++;
}
while(originalnumber!=0)
{
reminder=originalnumber%10;
result=pow(reminder,n);
originalnumber/=10;
}
if(result==number)
{
printf("%d is a armstrong number.\n",number);
}
else
{
printf("%d is not an armstrong number.\n",number);
}
return 0;
}