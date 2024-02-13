#include<stdio.h>
#include<conio.h>
main ()
{
int n,i=1;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(i<=n)
{
if(i%2==0)
{
printf("\t%d",i);
}
i++;
}
getch();
}
