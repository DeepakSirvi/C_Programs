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

int octToDec(char oct[])
{
 int i,a,s=0,j=0;
 for(i=5;i>=0;i--)
 {
   a=(oct[i]-48)*pow(8,j);
   s=s+a;
   j++;
 }
return s;
}

void main()
{ int s;
 char oct[7]={"000000"};
 clrscr();
 printf("Enter the binary number in 6 digit");
 scanf("%s",&oct);
 s=intToBin(octToDec(oct));
 printf("%s",s);


getch();
}