void rev(char s[],int i,int j)
{
  for(;i<j;i++,j--)
  {
  s[i]=s[i]+s[j]-(s[j]=s[i]);
  }
}



void first(char s[])
{ int i=0;
for(;i<strlen(s);i++)
{
 if(s[i-1]==' ' || i==0)
   {
    rev(s,i,last(s,i));
   }
 }
}



int last(char s[],int l)
{
  for(;l<strlen(s);l++)
  {
   if(s[l+1]==' ' || s[l+1]=='\0')
   return l;
  }
}



void main()
{  int i;
char str[100];
char str1[100];
clrscr();
printf("Enter the string\n");
gets(str);
for(i=0;i<=strlen(str);i++)
str1[i]=str[i];
rev(str1,0,strlen(str1)-1);
first(str1);
printf("%s\n",str1);
printf("%s\n",str);
  if(strcmp(str1,str)==0)
  printf("String is pallindrom");
  else
  printf("Not pallindrom");
 getch();
}