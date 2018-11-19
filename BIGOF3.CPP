#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3;
clrscr();
printf("enter the values of num1 and num2 and num3");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2)
{
  if(num1>num3)
  {
    printf("%d is bigger",num1);
  }
  else
  {
    printf("%d is bigger",num3);
  }
}

else
{
if(num2>num3)
{
printf("%d is bigger",num2);
}
else
{
printf("%d is bigger",num3);
}
}
getch();
}
