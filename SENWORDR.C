void main()
{ char s[100],a[100],c;
int i=0,j;
clrscr();
printf("Enter the string");
gets(s);
while(1)
{
  while(s[i]!=' ')
  {
    j=0;
    a[j]=s[i];
    j++;
    i++;
    }
    c=reverse(char a);
    printf("%s",a);
    i++;
    if(s[i]=='\o')
    {
    break;
    }
    else
    {
      a[]=0;
      }
      }
      getch();
      }

char reverse(char a)
{ int i=0,j;
char x;
j=strlen(s)-1;
while(i<j)
{
  x=a[i];
  a[i]=a[j];
  a[j]=x;
       }
       return a;
       }
