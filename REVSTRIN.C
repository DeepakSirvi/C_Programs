// Reverse the given string using function
char *rev(char s[])
{
   int i,j;
   j=strlen(s)-1;
   for(i=0;i<j;i++,j--)
   s[i]=s[i]+s[j]-(s[j]=s[i]);
return s;
}

void main()
{
  char s[100];
  clrscr();
    printf("Enter the string : ");
    gets(s);
    printf("%s",rev(s));
getch();
}





/*void main()
{
  char s[100],ch;
  int i=0,j;
  clrscr();
  printf("Enter the string : ");
  gets(s);
  j=strlen(s)-1;
  while(i<=j)
  {
    ch=s[i];
    s[i]=s[j];
    s[j]=ch;
   i++;
   j--;
  }
  printf("%s",s);
  getch();
  }*/
