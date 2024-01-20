char* intToBin(int n)
{  static char bin[17]={"0000000000000000"};
  int r,i=15;
  while(n>0)
  {
   r=n%2;
   n=n/2;
   bin[i]=48+r;
   i--;
  }
  return bin;
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
 printf("Enter the hexa in 4 digit");
 scanf("%s",&hexa);
 s=intToBin(hexaToDec(hexa));
 printf("%s",s);


getch();
}







