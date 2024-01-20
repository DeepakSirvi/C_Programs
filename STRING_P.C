void revstr(char rev[],int i,int j)
{
  for(;i<j;i++,j--)
  rev[i]=rev[i]+rev[j]-(rev[j]=rev[i]);
}



void main()
{
  char s[]="this is a is this";
 char rev[100];
  int i,j,c;
  clrscr();
 for(i=0;i<=strlen(s);i++)
   rev[i]=s[i];
  //printf(" s to rev %s\n",rev);
 j=strlen(rev)-1;
 for(i=0;i<j;i++,j--)
  rev[i]=rev[i]+rev[j]-(rev[j]=rev[i]);
 // printf("reversr of rev %s\n",rev);

 i=0;
 while(1)
 {
 c=0;
 for(;i<=strlen(rev);i++)
 {
  if(rev[i]==' '|| rev[i]=='\0')
  {
   revstr(rev,i-c,i-1);
   i++;
   break;
   }
   c++;
 }
 if(rev[i]=='\0')
 {
  break;
 }
 }

// puts(rev);
 if(strcmp(s,rev)==0)
 printf("String pollindrom");
 else
 printf("String is not pollindrom");
 getch();
}