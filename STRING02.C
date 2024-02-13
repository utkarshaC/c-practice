#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10];
clrscr();
printf("enter the sring");
scanf("%s",&str);
printf("\n string upper=%s",strupr(str));
getch();
}