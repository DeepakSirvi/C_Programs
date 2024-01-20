// Count a word in a string
int count(char s[])
{

    int i,c=1;

      for(i=0;i<strlen(s);i++)
        {
           if(s[i]==' ' && s[i+1]==' ')
               c=c;
           else if(s[i]==' ')
           c++;

        }
 return c;
}

void main()
{
  char s[100];
  clrscr();
  printf("Enter the number\n");
  gets(s);
  printf("%d",count(s));


getch();
}










/*void main()
{
  char s[100]={0};
  int i=1,x=0,size;
  clrscr();
  printf("enter the string : ");
 // scanf("%s",&s);
 gets(s);
  size=strlen(s);
  while(x<size)
  {
    if(s[x]==8)
    {
      i++;
       }
       x++;
        }
        printf("%d \n",i);
        printf("%d \n",x);
        getch();

        }*/