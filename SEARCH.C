int check(char s[],char find[],int i)
{
    int f=0,j=0;
   int find_l=strlen(find);
    int str_l=strlen(s)-i;


if(str_l>=find_l)
{
   for( ;j<find_l;i++,j++)
   {
     if(s[i]!=find[j])
     {
       f=1;
       break;
     }
     }
     if(f==0)
     return 1;
     }

   return 0;
}


void search(char s[],char find[])
{
  int i,f=0;
  for(i=0;i<strlen(s);i++)
     {
       if(s[i]==find[0])
       {
        f=1;
        break;
       }
     }
     if(f==1)
     {
     if(check(s,find,i))
      puts(s);
      }
}

void main()
{
 char* s[10]={"adesfd","hitaesda","arfedf","cat","mat","hitsdas","adede","catch","hital","camp"};
 char find[]={0};
 int i;
 clrscr();
 printf("Enter the number\n");
 scanf("%s",&find);
 for(i=0;i<10;i++)
   search(s[i],find);
getch();
}



/*
int match(char s[],char find[],int i)
{
 int find_l=strlen(find);
 int str_l=strlen(s)-i;
 int j,f=0;
 if(str_l>=find_l)
 {
  for(j=0;j<find_l;j++,i++)
  {
   if(s[i]!=find[j])
   {
   f=1;
   break;
   }
   }
   if(f==0)
   return 1;
  }
  return 0;
 }


void search(char s[],char find[])
{
   int i=0,f=0;
   for(;i<strlen(s);i++)
   {
    if(s[i]==find[0])
    {
     f=1;
     break ;
    }

   }
     if(f==1)
     {
     if(match(s,find,i))
       puts(s);
       }
}




void main()
{
 char find[]={0};
  char *s[5]={"absdced","hitx","shit","dceass","hital"};
  int i;
  clrscr();
  printf("Enter the string to search : ");
  scanf("%s",&find);
  for(i=0;i<5;i++)
  {
   search(s[i],find);

   }
  getch();
 }*/