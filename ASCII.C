// Accept a charater and printf type of character
char* character(char ch)
{  char s[20]={0};
  if(ch>=65 && ch<=90)
     printf("Capital letter");

       else if(ch>=97 && ch<=122)
         printf("Small letter");
            else if(ch>=48 && ch<=57)
                printf("Numerical value");
                    else
                      printf("Symbol");
  return s;
}
void main()
{
  char ch;
  clrscr();
  printf("Enter the character");
  scanf("%c",&ch);

  printf("%s",character(ch));


getch();
}


/*void main()
{
 char c;
 clrscr();
 printf("enter the character");
 scanf("%c",&c);
 if(c>=65 && c<=90)
 {
 printf("Capital letter");
 }
 else if(c>=97 && c<=122)
 printf("Small letter");
 else if(c>=48 && c<=57)
 printf("Number");
 else
 printf("symbol");
getch();
} */