#include<stdio.h>
#include<conio.h>
void main()
{
int z,n,i;
clrscr();
printf("Enter the number");
scanf(%d",&n);
for(i=1;i<=10;i++)
{
z=n*i;
printf("%d*%d=%d",i,n,z);
}
getch();
}
