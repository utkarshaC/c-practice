#include<stdio.h>
#include<conio.h>
int evenodd();
void main()
{
clrscr();
evenodd();
getch();
}
int evenodd()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(num%2==0)
{
printf("\n number is even");
}
else
{
printf("\n number is odd");
}
}