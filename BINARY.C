//Assign.no.3
#include<stdio.h>
#include<conio.h>
void main()
{
int n, x, i, a[50], low, high, mid, ele;
clrscr();
printf("\nEnter the Size of array");
scanf("%d",&n);
printf("\n Enter the elements in Array");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
 printf("\nEnter the element to search");
 scanf("%d",&ele);
  low=0;
  high=n-1;
  while(low<=high)
  {
  mid=low+high/2;

  if(ele==a[mid])
  {
  printf("\n Element found at position %d",mid+1);
  break;
  }
 else if(ele>a[mid])
  {
  low=mid+1;
  }
  else
  {
  high=mid-1;
  }
}
getch();
}

/*
OUTPUT
------

Enter the Size of array 6

 Enter the elements in Array 3 4 5 6 7 8

Enter the element to search 5

 Element found 3

------------------------------

Enter the Size of array 4

 Enter the elements in Array 6 7 8 9

Enter the element to search 7

 Element found 2

*/













                                                                                
                                                                                
