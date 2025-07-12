#include<conio.h>
#include<stdio.h>
int main()
{
int* ptr;
int sal;
clrscr();
ptr=&sal;
printf("\nMemory address=%p",&sal);
printf("\nEnter the person's salary=");
scanf("%d",&sal);
*ptr=*ptr*2;
printf("\nthe person's salry is doubled=%d",sal);
getch();
return 0;
}
