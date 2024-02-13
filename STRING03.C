#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10];
clrscr();
printf("enter the string");
scanf("%s",&str);
printf("string lower=%s",strlwr(str));
getch();
}