#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  printf("enter value of i:\n");
  scanf("%d",&i);
  for(j=1;j<=20;j++)
   {
    printf("%d x %d = %d\n",i,j,i*j);
   }
 getch();
}