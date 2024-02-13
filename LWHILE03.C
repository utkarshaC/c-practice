#include<stdio.h>
#include<conio.h>
main ()
{
int n,i=1,f=1;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
while(i<=n)
{
f=f*i;
i++;
}
printf("\n%d",f);
getch();
}
