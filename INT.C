#include<conio.h>
#include<stdio.h>
int main()
{
int n,r;
clrscr();

printf("\nEnter the number=");
scanf("%d",&n);
r=n%2;
if(r==0)
{
printf("\nThe given number is a even number");
}
else
{
printf("\nThe number you have entered is odd number");
}
getch();
return 0;
}