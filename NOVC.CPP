#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{      int nc = 0,nv = 0,i;
       char str[100]={0};
       clrscr();
       printf("Enter a string\n");
       scanf("%[^\n]s",str);
       for(i=0;str[i]!='\0';i++)
       {
	  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		       nv++;
		 else
		       nc++;

       }
       printf("no. of vowels in the string %d\n",nv);
       printf("no. of consonants in the string %d\n",nc);

       getch();
}