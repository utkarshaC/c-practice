#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=5;i++)
{
if(i==3)
{
break;
}
printf("\n%d",i);
}
getch();
}