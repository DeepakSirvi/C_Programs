void cov(char s[],int i)
{
  if(s[i]>=97 && s[i]<=122)
 s[i]=s[i]-32;
}


void main()
{
  char s[100];
  int i;
  clrscr();
  printf("Enter the string\n");
  gets(s);
  while(1)
  {
  for(i=0;i<strlen(s);i++)
  {
    cov(s,0);
    if(s[i]==' ' && s[i+1]!=' ')
      {
       cov(s,i+1);

      }
   }
   if(s[i]=='\0')
   break;

  }
  puts(s);
getch();
}