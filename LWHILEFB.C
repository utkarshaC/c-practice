#include<stdio.h>
#include<conio.h>
main ()
{
int n,i=1,sum=0,fact=1,h;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
fact=fact*i;
h=sum/fact;
i++;
}
printf("\n %d",h);
getch();
}