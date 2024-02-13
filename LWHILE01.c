#include<stdio.h>
#include<conio.h>
main ()
{
int num,i=1;
clrscr ();
printf("enter the value of num");
scanf("%d",&num);
while(i<=10)
{
printf("\n %d",i*num);
i++;
}
getch();
}