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

int binToDec(char bin[])
{
 int i,a,s=0,j=0;
 for(i=15;i>=0;i--)
 {
   a=(bin[i]-48)*pow(2,j);
   s=s+a;
   j++;
 }
return s;
}

void main()
{ int s;
 char bin[17]={"0000000000000000"};
 clrscr();
 printf("Enter the binary number in 16 digit");
 scanf("%s",&bin);
 s=binToDec(bin);
 printf("%d",s);


getch();
}