






// login screen
char *passf()
{
 static char pass[20]={"0"};
  char ch;
  int i=0;
  while(1)
  {
   ch=getch();
    if(ch==13)
    break;
    else if(ch==8)
    {
     pass[i--]='\0';
      printf("\b \b");
    }
    else
    {
     pass[i++]=ch;
     printf("*");
    }
  }
 return pass;
}

void main()
{      int c=0;
 static  char oldp[]="abc123";
  char user[20];
  char *pass;
  static  char oldu[]="123456";
  clrscr();
  while(1)
  {
    printf("Enter the user id");
    scanf("%s",&user);
    printf("Enter the password");
  pass=passf();
   if(strcmp(oldu,user)==0 && strcmp(oldp,pass)==0)
   {
   printf("login succesfully");
   break;
   }
   else
   {
   printf("Invalid login");
   c++;
       }
      if(c==3)
       break;
  }


getch();
}












/*char *checkPassword()
{ static char s[20]={"0"};
  char ch;
  int i=0;
  while(1)
  {
  ch=getch();
   if(ch==13)
   break;
   else if(ch==8)
   { s[i--]='\0';
   printf("\b \b");
   }
   else
   { s[i++]=ch;
   printf("*");
    }
   }

 return s;
}









void main()
{  static char oldPassword[]="123456";
   static char oldUser[]="abc123";
   char *s;
   char user[20];
   clrscr();
   while(1)
   {
    printf("\n\n\n\n%40s%65s","Enter the User id"," ");
   scanf("%s",&user);
   printf("\n\n\n%40s%65s","Enter the password"," ");
      s=checkPassword();
      if(strcmp(user,oldUser)==0 && strcmp(s,oldPassword)==0)
      {
      printf("\n\n%40s","Login succes");
      break;

      }
      else
      { clrscr();
       printf("\n\n\n%45s","Invalid user id or password");

       i++;
       if(i==3)
       {
       printf("\n\n%45s","Account locked");
       break;
       }
      }

    }
getch();
}

  */




/*void main()
{
 int i;
 char s[20],ch;
 clrscr();
 printf("Enter the string : ");
 gets(s);
 printf("Enter the char : ");
 scanf("%c",&ch);

 for(i=0;i<strlen(s);i++)
 {
   if(s[i]==ch)
   printf("%c ==> %d\n",ch,i);
 }
 getch();
}
  */


/*int check(char s[],char ch,int i)
{ int f=0;
  for(;i>=0;i--)
  {
   if(ch==s[i])
   {
   f=1;
   break;
   }
  }
  if(f==0)
  return 1;
  else
  return 0;
}


int count(char s[],char ch,int i)
{
  int c=0;
  for(;i<strlen(s);i++)
  {
  if(s[i]==ch)
  c++;
  }

  return c;

}



void main()
{
int i;
char s[100];
char ch;
clrscr();
printf("Enter the string\n");
gets(s);
for(i=0;i<strlen(s);i++)
{
 ch=s[i];
 if(check(s,ch,i-1))
 {
printf(" %c ==> %d\n",ch,count(s,ch,i));
  }
}
getch();
}  */