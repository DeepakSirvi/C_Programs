void main()
{
  char s[100]={'\0'},ch;
  int i,j;
  clrscr();
  printf("Enter the all small letter\n");
  gets(s);

  for(i=0;i<strlen(s);i++)
  {
      for(j=i+1;j<strlen(s);j++)
      {
        if(s[i]>s[j])
        s[i]=s[i]+s[j]-(s[j]=s[i]);
      }
  }
  printf("%s",s);


getch();
}