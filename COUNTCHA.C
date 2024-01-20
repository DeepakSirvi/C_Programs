void main()
{char s[20];
int i,upper=0,lower=0,num=0,sym=0;
clrscr();
printf("enter the string : ");
scanf("%s",&s);
for(i=0;i<strlen(s);i++)
{
  if(s[i]>=65 && s[i]<=90)
  upper++;
  else if(s[i]>=97 && s[i]<=122)
  lower++;
  else if(s[i]>=48 && s[i]<=57)
  num++;
  else
  sym++;
  }
  printf("total upper letter are %d\n",upper);
  printf("total lower letter are %d\n",lower);
  printf("total numberical value are %d\n",num);
  printf("total number of symbol are %d\n",sym);
  printf("string length %d",strlen(s));
  getch();
  }

