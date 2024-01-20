#include<stdio.h>
#include<conio.h>
void main()
{
   char c;
   clrscr();
      printf("enter a charater : ");
      scanf("%c",&c);
     if(c>=65 && c<=90)
     printf("%c is capital letter",c);
       else if(c>=97 && c<=122)
        printf("%c is small letter",c);
         else if(c>=48 && c<=57)
          printf("%c is numerical",c);
           else
            printf("%c is symbol",c);
            getch();
            }

