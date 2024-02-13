#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
clrscr();
printf("enter string1 & string2");
scanf("%s%s",&str1,&str2);
printf("\n string1=%s",strcpy(str1,str2));
getch();
}