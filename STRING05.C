#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10], str2[10];
clrscr();
printf("enter the string1 and string2");
scanf("%s%s",&str1,&str2);
printf("string join=%s",strcat(str1,str2));
getch();
}