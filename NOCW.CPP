#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{      int nc = 0,nw = 0,i;
       char str[100]={0};
       clrscr();
       printf("Enter a string\n");
       scanf("%[^\n]s",str);
       for(i=0;str[i]!='\0';i++)
       {
		 if(str[i]!=' ')e
		       nc++;
		 else
		       nw++;

       }
       printf("no. of characters in the string %d\n",nc);
       printf("no. of words in the string %d\n",nw+1);

       getch();
}