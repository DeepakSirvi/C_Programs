char *readpass()
{
  char


}

void main()
{
 char *oldpass[]="123456",*oldUser[]="abcde",u[20];
 int c=0;
 clrscr();

 while(1)
 {
 printf("Enter user id");
 scanf("%s",&s);
 printf("Enter password");
 u=readpass();


  }
 getch();
 }




























/*
char* readpass()
{ static char s[20]={0};
  char ch;
  int i=0;
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
    }
  else
  {
  printf("*");
  s[i++]=ch;
  }
  }
 return s;
}


void main()
{
static char oldPass[]="abc123";
static char User[]="Deepak123";
 char *s;
 char u[20]={0};
 int c=0;
 clrscr();
 while(1)
 {
   printf("\n\n\n\n%45s%30s","Enter user name\n","");
   scanf("%s",&u);
   printf("\n%44s%30s","Enter password\n","");
   s=readpass();
  if((strcmp(oldPass,s)==0) && (strcmp(User,u)==0))
    { clrscr();
    printf( "\n\n\n\n%45s","login Success ");
    break ;
    }
    else
    {
    clrscr();
    printf("\n\n\n%55s","invalid password or user id\n");
    c++;
    }
    if(c==3)
    { clrscr();
    printf("\n\n\n\n%45s","Account has been locked");
    break ;
    }
    }
 getch();
 }*/