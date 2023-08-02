#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n>0)
{
printf("\n %d number is positive",n);
}
else if(n<0)
{
printf("\n %d number is negative",n);
}
else
{
printf("\n %d number is zero",n);
}
return 0;
}