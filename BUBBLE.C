#include<conio.h>
#include<stdio.h>
int main()
{
int arr[100],n,i,j;
for(i=0;i<n;i++)
{
printf("\nEnter the %d number",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
getch();
return 0;
}