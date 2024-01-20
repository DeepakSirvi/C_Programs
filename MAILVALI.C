/*int get(char s[],char ch)
{
 int i;
 for(i=strlen(s);i>=0;i--)
 {
  if(s[i]==ch)
    return i;

 }
 return i;
}

void main()
{
 char s[50],ch;
 int f=0,dot,at,l;
 clrscr();
 printf("Enter the gmail : ");
 gets(s);
 l=strlen(s);
 ch='.';
 dot=get(s,ch);
 ch='@';
 at=get(s,ch);

  if(l<5 || at<1 || dot<1 )
    f=1;
    else if(at<1)
    f=1;
    else if(dot==l)
     f=1;
     else if(dot-at<2)
     f=1;

   if(f==0)
   printf("Valid email");
   else
   printf("Invalid email");

getch();
} */


int fun2(char s[],int i)
{
  for(;i<strlen(s);i++)
  {
  if(s[i]==' '||  s[i]=='@')
  break;
  else
  {
    if(s[i+2]=='.' && s[i+3]!='\0' && s[i+3]!='.')

      return 1;
      }
  }
  return 0;
}


int fun(char s[])
{ int i;
 for(i=0;i<strlen(s);i++)
 {
   if(s[i]==' ')
   break;
   else
   {
    if(s[i+1]=='@' && s[i+2]!='@')
    {
      if(fun2(s,i+1))
      {
        return 1;
      }
     }
    }
    }
    return 0;
}


void main()
{
 char s[100];
 clrscr();
 printf("Enter the Gmail : ");
 gets(s);
 if(fun(s))
 printf("valid email");
 else
 printf("Invalid email");

getch();
}