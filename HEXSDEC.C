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
 printf("Enter the binary number in 4 digit");
 scanf("%s",&hexa);
 s=hexaToDec(hexa);
 printf("%d",s);


getch();
}