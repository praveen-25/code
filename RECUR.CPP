/*prime by function calling*/
#include<stdio.h>
#include<conio.h>
int fact(int);

void main()
{
  clrscr();
  printf("\n\n\nFactorial : %d",fact(n));
  getch();
}
int fact(int n)
{
  if(n==0)
	return 1;

    else
	return n*fact(n-1);
}
