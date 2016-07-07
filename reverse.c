#include<stdio.h>
#include<conio.h>
void main()
{
int t,r=0,n;
clrscr();
printf("Enter the no");
scanf(:%d",&n);
while(n>0)
{
   t=n%10;
   r=r*10+t;
   n=n/10;
 }
getch();
}
