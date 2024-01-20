void main()
{
  int i,y,m,w,d;
  clrscr();
  printf("Enter the day");
  scanf("%d",&i);
  y=i/365;
  i=i%365;
  m=i/30;
  i=i%30;
  w=i/7;
  d=i%7;
        printf(" %d years %d months %d weeks %d day",y,m,w,d);


getch();
}





/*void main()
{ int n,y,m,w;
clrscr();
printf("Enter the day");
scanf("%d",&n);
if(n<365)
   y=00;
   else
   {
   y=n/365;
   n=n%365;
   }
if(n<30)
   m=00;
   else
   {
   m=n/30;
   n=n%30;
   }
if(n<7)
   w=00;
   else
   {
   w=n/7;
   n=n%7;
   }

   printf("%d years %d months %d weeks %d days",y,m,w,n);

getch();
} */