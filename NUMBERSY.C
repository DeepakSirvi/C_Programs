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



char* intToBin(int n)
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
     return oct;
}




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

return hex;
}




int binToint(char bin[])
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




int octToint(char oct[])
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




char* intToOct(int n)
{
 return binToOct(intToBin(n));
 }


char* intToHex(int n)
{
return binToHex(intToBin(n));
}

char* octToBin(char oct[])
{
return intToBin(octToint(oct));
}

char* octToHex(char oct[])
{
 return binToHex(intToBin(octToint(oct)));
}


char* hexToBin(char hex[])
{
return intToBin(hexToint(hex));
}


char* hexToOct(char hex[])
{
 return binToOct(intToBin(hexToint(hex)));
}



int hexToint(char hexa[])
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
{
int x,n;
char bin[17]={"0000000000000000"};
char oct[7]={"000000"};
char hex[5]={"0000"};
clrscr();
 printf("1 : Decimal to binary\n2 : Decimal to octal\n3 : Decimal to hexa\n");
 printf("4 : Binary to decimal\n5 : Binary to octal\n6 : Binary to hexa\n");
 printf("7 : Octal to decimal\n8 : Octal to binary\n9 : Octal to hexa\n");
 printf("10 : Hexa to decimal\n11 : Hexa to binary\n12 : Hexa to octal\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
        printf("Enter the decimal number : ");
        scanf("%d",&n);
        printf("%s",intToBin(n));
        break;
 case 2:
        printf("Enter the decimal number : ");
        scanf("%d",&n);
        printf("%s",intToOct(n));
        break ;
 case 3:
        printf("Enter the decimal number :");
        scanf("%d",&n);
        printf("%s",intToHex(n));
        break ;
 case 4:
        printf("Enter the binary number in 16 digit : ");
        scanf("%s",&bin);
        printf("%d",binToint(bin));
        break ;

 case 5:
        printf("Enter the binary number in 16 digit : ");
        scanf("%s",&bin);
        printf("%s",binToOct(bin));
        break ;
 case 6:
        printf("Enter the binary number in 16 digit : ");
        scanf("%s",&bin);
        printf("%s",binToHex(bin));
        break ;
 case 7:
        printf("Enter the octal number in 6 digit : ");
        scanf("%s",&oct);
        printf("%d",octToint(oct));
        break ;

 case 8:
        printf("Enter the octal number in 6 digit : ");
        scanf("%s",&oct);
        printf("%s",octToBin(oct));
        break ;
 case 9:
        printf("Enter the octal number in 6 digit : ");
        scanf("%s",&oct);
        printf("%s",octToHex(oct));
        break ;
 case 10:
        printf("Enter the hexa number in 4 digit : ");
        scanf("%s",&hex);
        printf("%d",hexToint(hex));
        break ;
 case 11:
        printf("Enter the hexa number in 4 digit : ");
        scanf("%s",&hex);
        printf("%s",hexToBin(hex));
        break ;

 case 12:
        printf("Enter the hexa number in 4 digit : ");
        scanf("%s",&hex);
        printf("%s",hexToOct(hex));
        break ;

 default:
        printf("Invalid input");
    }

  getch();
 }