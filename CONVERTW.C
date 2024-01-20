// Convert an upper case to lower case and wise versa
char *rev(char s[])
{
 char ch;
 int i;
 for(i=0;i<strlen(s);i++)
 {
   if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
         else if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
 }
return s;
}

void main()
{
  char s[200];
  clrscr();
  printf("Enter the string\n");
  gets(s);
  printf("%s",rev(s));
 getch();
}



/*void main()
{
  char s[100],c;
  int i,size;
  clrscr();
  printf("Enter the string");
  scanf("%s",&s);
  size=strlen(s);
  for(i=0;i<size;i++)
  {  c=s[i];
    if(c>=65 && c<=90)
    {
    c=c+32;
    s[i]=c;
    }
    else if(c>=97 && c<=122)
    {
     c=c-32;
    s[i]=c;
     }
  }
  printf("%s",s);
  getch();
    }


*/