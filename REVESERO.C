

// Reverse the string  in of pair charcter
char *rev(char s[],int i,int j)
{
 if(j>=strlen(s))
 {
  j=strlen(s)-1;
 }

  for(;i<j;i++,j--)
  s[i]=s[i]+s[j]-(s[j]=s[i]);
  return s;
}


void main()
{
 int i,j,y=4,z,t=1;
 char s[100];
 clrscr();
 printf("Enter the string");
 gets(s);
 j=strlen(s)-1;
 z=strlen(s)/y;
 if(z%y!=0)
 z++;
 for(i=0;i<=j;i+=y)
  { //printf("test");
  while(t<=z)
  {
  if(t%2==0)
  {t++;
  rev(s,i,i+y-1);
// printf("%d\n",t);
  break;
  }
  else
  {
  t++;
  //printf("%d\n",t);
  break;
  }
 }
 }
 puts(s);
getch();
}
















 /*
void revstr(char s[],int fi,int li)
{
  char a;
   if(li>=strlen(s))
  li=strlen(s)-1;
   for( ;fi<=li;fi++)
   {
    a=s[fi];
    s[fi]=s[li];
    s[li]=a;
   li--;
   }
 }

void main()
 { int g,y=2,i,x=0;
  char s[20];
  clrscr();
  printf("Enter the string");
  scanf("%s",&s);
  g=strlen(s)/y;
  if(strlen(s)%y!=0)
  g++;

  for(i=0;i<g;i++)
  {
  if(i%2==0)
  revstr(s,x,x+y-1);
  x+=2;
  }
printf("%s",s);
getch();
}  */