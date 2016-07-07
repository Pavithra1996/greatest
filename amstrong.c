#include<stdio.h>
#include<conio.h>
void main()
{
int z,t,s=0,n;
clrscr();
printf("Enter the no");
scanf(:%d",&n);
z=n;
while(n>0)
{
   t=n%10;
   s=s+(t*t*t);
   n=n/10;
 }
 if(z==s)
 printf("amstrong number");
 else
 printf("not an amstrong number");
getch();
}
