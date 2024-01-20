// Gentric root

int rev(long n)
{
 int n1=0;
 for( ;n!=0;n=n/10)
  n1=n1+n%10;
return n1;
}

void main()
{
   long n,f;
   clrscr();
   printf("Enter the number");
   scanf("%ld",&n);
   while(1)
   {
      f=rev(n);

           if(f>9)
           {
           n=f;
           }
             else
              {
                printf("%ld",f);
               break;
               }
             }
getch();
}





/*void main()
{
  int n1,n2,r,s=0;
  clrscr();
  printf("Enter the number : ");
  scanf("%d",&n1);
  n2=n1;
  while(1)
  {
   while(n1>0)
   {
     r=n1%10;
     n1=n1/10;
     s=s+r;
     }
     if(s<10)
     {
      printf("genric root of %d is %d",n2,s);
      break;
      }
      else
       {
          n1=s;
          s=0;
          }
          }
          getch();
          }   */