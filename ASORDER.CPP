#include<stdio.h>
#include<conio.h>

void main()
{
  int a[5],i,j,temp;
  clrscr();
  printf("enter the elements of array:\n");
  for(i=0;i<5;i++)
  {
       scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
	  for(j=0;j<5;j++)
	  {
	     if(a[i]<a[j])
	       {
		  temp = a[i];
		  a[i] = a[j];
		  a[j] = temp;
	       }

	  }
  }
  printf("elements in ascending order\n");
  for(i=0;i<5;i++)
  {
	      printf("%d\n",a[i]);
  }

  getch();
}