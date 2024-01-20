// Conversion from decimal to binary
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
    bin[i]='0';
    break;
    }
 }
 }
  return bin;
}


void main()
{
 char bin[17]="0000000000000000";
 int n;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);
 printf("%s",decToBin(n));
getch();
}



/*char* intToBinary(int n)
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
     i=i-1;
     while(i>0)
     {
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
     else if(s[i]=='0')
     {
      s[i]='1';
      break;
     }
     i--;
  }
  }

  return s;
  }

  void main()
  {
     int x,s;
     clrscr();
     printf("Enter the number : ");
     scanf("%d",&x);
     s=intToBinary(x);
     printf("%s",s);
     getch();
  }*/