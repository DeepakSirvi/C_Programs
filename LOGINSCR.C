void main()
{
 static char oldPass[]="abc123";
  char s[20]={0};
  char ch;
  int i=0,c=0;
  clrscr();
  while(1)
  { i=0;
    printf("%45s%30s","Enter password\n"," ");
    while(1)
  {
    ch=getch();
   if(ch==13)
    {
    break ;
    }
    else if(ch==8)
    {
    printf("\b \b");
    s[i--]=0;
   // i--;
    }
    else
    {
    printf("*");
    s[i]=ch;
    i++;

   // printf("*");
    }

    }
    printf("%45s"," \n");
    printf("%s",s);
    if(strcmp(oldPass,s)==0)
    {
    printf( "%45s"," login Success ");
    break;
    }
    else
    {
    printf("%45s","invalid password\n");
    c++;
    }
    if(c==3)
    {
    printf("%45s","Account locked");
    break ;
    }
    }
    getch();
    }

