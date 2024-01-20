void main()
{
   int i,h,m;
   clrscr();
   printf("Enter the number");
   scanf("%d",&i);
   h=i/3600;
   i=i%3600;
   m=i/60;
   i=i%60;

   printf("%d hours %d min %d sec",h,m,i);
getch();
}



/*void main()
{ int n,h,m;
clrscr();
printf("Enter the second");
scanf("%d",&n);
if(n<3600)
 h=00;
 else
 {
 h=n/3600;
 n=n%3600;
 }
 if(n<60)
  m=00;
 else
 {
   m=n/60;
   n=n%60;
   }
printf("%d Hrs:%d Min:%d Sec",h,m,n);

getch();
}
  */