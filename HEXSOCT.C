
char* binToOct(char bin[])
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
  // printf("%s\n",s);
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



int hexaToDec(char hexa[])
{
 int i,a,b,s=0,j=0;
 for(i=3;i>=0;i--)
 {
 if(hexa[i]>57)
 {
 b=hexa[i]-55;
 }
 else
 {
 b=hexa[i]-48;
 }
   a=(b)*pow(16,j);
   s=s+a;
   j++;
 }
return s;
}








void main()
{ int s;
 char hexa[5]={"0000"};
 clrscr();
 printf("Enter the hexa number in 4 digit");
 scanf("%s",&hexa);
 s=binToOct(intToBin(hexaToDec(hexa)));
 printf("%s",s);


getch();
}