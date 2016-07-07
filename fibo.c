#include <stdio.h>
#incude<conio.h>
void main()
{
    int i,f1,f2,f3;
    clrscr();
    f1=0;
    f2=1;
    printf("%d",f1,f2);
    for(i=0;i<=5;i++)
 {
 f3=f1+f2;
     printf("\n%d",f3);
     f1=f2;
     f2=f3;
 }   
getch();
}
