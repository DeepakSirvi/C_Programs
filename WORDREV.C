char* revstr(char s[],int i,int j)
{
for(;i<j;i++,j--)
{
 s[i]=s[i]+s[j]-(s[j]=s[i]);

 }
  return s;
}


void main()
{
  char s[100];
  int i=0,j,c;
  clrscr();
  printf("enter the string  : ");
  gets(s);
  while(1)
  {
  c=0;
  for(;i<=strlen(s);i++)
  {
   if(s[i]==' ' || s[i]=='\0')
   {
     revstr(s,i-c,i-1);
   // printf(" %d %d ",c,i);
     i++;
     break;
     }
     c++;
  }
  if(s[i]=='\0')
  break;
   }
    printf("Reverse is %s",s);
    getch();
    }