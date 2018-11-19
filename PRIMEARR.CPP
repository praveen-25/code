#include<stdio.h>
#include<conio.h>

void main()
{
  int a[5],count,i,j;
  clrscr();
  printf("enter the elements of array:\n");
  for(i=0;i<5;i++)
  {
       scanf("%d",&a[i]);
  }
  printf("prime numbers in given array are:\n");
  for(i=0;i<5;i++)
   {
	  count=0;
	  for(j=1;j<=a[i];j++)
	  {
	     if(a[i]%j==0)
	       ++count;
	  }
	  if(count==2)
	  {
	       printf("%d\n",a[i]);
	  }
   }

  getch();
}