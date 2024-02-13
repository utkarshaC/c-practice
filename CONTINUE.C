#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
for(i=1;i<=10;i++)
sum=sum+i;
goto label;
label:printf("\n sum=%d",sum);
getch();
}