// Conversion Decimal to hexa
char *binToHex(char bin[])
{
  static char hex[5]={"0000"};
   int i=15,j=3;
     while(i>=0)
     {
        hex[j]=((bin[i]-48)*1+(bin[i-1]-48)*2+(bin[i-2]-48)*4)+(bin[i-3]-48)*8;
        i-=4;
        if(hex[j]>9)
        hex[j]=hex[j]+55;
        else
        hex[j]=hex[j]+48;
        j--;
     }

  return hex;
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
  printf("%s",binToHex(decToBin(n)));
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
 return bin;
}

char* intToHex(char bin[])
{
int i,j=3;
static char hex[5]={"0000"};
for(i=15;i>=0;i-=4)
{
hex[j]=((bin[i]-48)*1)+((bin[i-1]-48)*2)+((bin[i-2]-48)*4)+((bin[i-3]-48)*8)+48;
if(hex[j]>57)
hex[j]=hex[j]+7;
j--;
}

return hex;
}




void main()
{
int x,c;
clrscr();
printf("Enter the number");
scanf("%d",&x);
c=intToHex(intToBin(x));
printf("Hex %s",c);
getch();
}


  */