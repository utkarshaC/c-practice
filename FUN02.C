#include<stdio.h>
#include<conio.h>
float area();
float circum();
void main()
{
area ();
circum();
getch();
}
float area()
{
float a,r;
clrscr();
printf("enter the value of r");
scanf("%f",&r);
a=3.14*r*r;
printf("\n area=%f",a);
}
float circum()
{
float c,r;
clrscr();
printf("enter the value of r");
scanf("%f",&r);
c=2*3.14*r;
printf("\n circum=%f",c);
}
