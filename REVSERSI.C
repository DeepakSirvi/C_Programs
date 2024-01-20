void revstr(char s[],int fi,int li)
{
  char a;
  if(li>=strlen(s))
  li=strlen(s)-1;

   for( ;fi<li;fi++)
   {
    a=s[fi];
    s[fi]=s[li];
    s[li]=a;
   li--;
   }
 }

void main()
 { int g,y=3,i,x=0;
  char s[20];
  clrscr();
  printf("Enter the number");
  scanf("%s",&s);
  g=strlen(s)/y;
  if(strlen(s)%y!=0)
  g++;

  for(i=0;i<g;i++)
  {
  revstr(s,x,x+y-1);
  x+=y;
  }
printf("%s",s);
getch();
}