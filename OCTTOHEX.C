
char* binToHex(char bin[])
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
  printf("%s\n",hex);
return hex;
}



    char* intToBin(int n)
{
   static char s[17]={"0000000000000000"};
  int i=15,r,c=1;
  if(n>0)
  {
    while(n>0)
    {
    r=n%2;
    s[i]=48+r;
    n=n/2;
    i--;
    }
    }
    else
    {
    n=n*-1;
    while(n>0)
    {
     r=n%2;
     s[i]=48+r;
     n=n/2;
     i--;
     }
   i=0;
   while(i<16)
   {
    if(s[i]=='1')
    {
     s[i]='0';
     }
     else
     {
     s[i]='1';
     }
     i++;
     }
     while(i>0)
     { i--;
     if(s[i]=='1')
     {
     s[i]='0';
     c=1;
     }
     else if(c==1)
     {
     s[i]='1';
     break;
     }
  }
  }
   printf("%s\n",s);
  return s;
  }



  int pow(int n,int p)
{
 int i=1,s=1;
 while(i<=p)
 {
   s=s*n;
   i++;
 }
return s;
}

int octToDec(char oct[])
{
 int i,a,s=0,j=0;
 for(i=5;i>=0;i--)
 {
   a=(oct[i]-48)*pow(8,j);
   s=s+a;
   j++;
 }
 printf("%d\n",s);
return s;
}

void main()
{ int s;
 char oct[7]={"000000"};
 clrscr();
 printf("Enter the octal number in 6 digit");
 scanf("%s",&oct);
 s=binToHex(intToBin(octToDec(oct)));
 printf("%s",s);
getch();
}
