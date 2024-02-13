#include<stdio.h>
#include<conio.h>
float triangle();
void main ()
{
triangle();
getch();
}
float triangle()
{
float a,b,h;
clrscr();
printf("enter the value of b and h");
scanf("%f%f",&b,&h);
a=0.5*b*h;
printf("\n area=%f",a);
}
