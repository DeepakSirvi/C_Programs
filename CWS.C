// Count the character in a string
//Condition :- Count once a repeat charater


int count(char s[],char ch,int i)
{
  int c=1;

   for(;i<strlen(s);i++)
   {
        if(s[i]==ch)
        c++;
   }

 return c;

}

int check(char s[],char ch,int i)
{
   for(;i>=0;i--)
   {
        if(s[i]==ch)
        return 0 ;

   }
  return 1;
}

void main()
{
  int i;
  char s[100],ch;
  clrscr();
  printf("Enter the number\n");
  gets(s);

     for(i=0;i<strlen(s);i++)
     {
     ch=s[i];
     if(check(s,ch,i-1))
       printf("%c ==> %d\n",ch,count(s,ch,i+1));

     }
 getch();
}









/*int checkchar(char s[], char ch, int i)
 {
  for( ;i>=0;i--)
  {
    if(s[i]==ch)
    {
      return 0;
      }
      }
      return 1;
      }


int countchar(char s[],char ch,int i)
{  int c=0;
  for( ;i<strlen(s);i++)
  {
    if(s[i]==ch)
    {
      c++;
      }
      }
     return c;
     }

     void main()
{
   char s[]="dollop infotech";
   int i,c=0;
   clrscr();
   for(i=0;i<strlen(s);i++)
     {
      if(checkchar(s,s[i],i-1))
     {
       c=countchar(s,s[i],i);
       printf("%c --> %d\n",s[i],c);

     }
     }
     getch();
      }  */