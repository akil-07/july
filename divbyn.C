#include<conio.h>
#include<stdio.h>
int ret(num)
{
int digits,count,temp;
while(temp!=0)
{
digits=temp%10;
temp=temp/10;
if(num%digits==0)
{
count++;
}
}
return num;
}
int main()
{
int x,t;
printf("\nEnter the number=");
scanf("%d",&x);
t=ret(x);
printf("\nThe output is %d",t);
return 0;
}
