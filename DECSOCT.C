// Conversion Decimal to Octal
char *binToOct(char bin[])
{
  static char oct[7]={"000000"};
   int i=15,j=5;
     while(i>=0)
     {
        oct[j--]=((bin[i]-48)*1+(bin[i-1]-48)*2+(bin[i-2]-48)*4)+48;
        i-=3;
     }
     oct[0]=bin[0];
  return oct;
}

char* decToBin(int n)
{
 static char bin[17]={"0000000000000000"};
 int i=15,t,c=0;
 t=n;
 if(n<0)
 n=n*-1;
 while(n!=0)
 {
     bin[i]=n%2+48;
     n=n/2;
     i--;
 }
 if(t<0)
 {
   for(i=15;i>=0;i--)
 {
        if(bin[i]=='1')
        bin[i]='0';
        else
        bin[i]='1';
 }
 for(i=15;i>=0;i--)
 {
   if(bin[i]=='1')
   {
   bin[i]='0';
   c=1;
   }
   else if(c==1)
   {
   bin[i]='1';
   break;
   }
   else if(bin[i]=='0')
   {
   bin[i]='1';
   break;
   }
 }
 }
 printf("%s\n",bin);
  return bin;
}

void main()
{
  int n;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  printf("%s",binToOct(decToBin(n)));
  getch();
}

/*char* intToBin(int n)
{
static char bin[17]={"0000000000000000"};
 int r,i=15,f=0,c=0;
 if(n<0)
 {
   n=n*-1;
   f=1;
   }

  while(n!=0)
 {
  r=n%2;
  n=n/2;
  bin[i]=48+r;
  i--;
 }
 if(f==1)
 {
  for(i=15;i>=0;i--)
 {
 bin[i]=bin[i]=='1'?'0':'1';
 }
 for(i=15;i>=0;i--)
{
  if(bin[i]=='1')
  {
  bin[i]='0';
  c=1;
  }
  else if(c==1)
 { bin[i]='1';
 break;
 }
 }
 }
 //printf("bin %s\n",bin);
 return bin;
}

char* intToOct(char bin[])
{
static char oct[7]={"000000"};
int j=5,i;
for(i=15;i>0;i-=3)
{
oct[j]=(((bin[i]-48)*1)+((bin[i-1]-48)*2)+((bin[i-2]-48)*4)+48);
 j--;
}
oct[0]=bin[0];
//printf("oct %s\n",oct);
     return oct;
}



void main()
{ int x,s;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
s=intToOct(intToBin(x));
printf(" oct %s\n",s);
getch();
} */