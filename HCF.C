// HCF of two number

void main()
{
  int n,m,i;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&n,&m);
  if(n>m)
  n=n+m-(m=n);
  for(i=m/2;i>=1;i--)
  {
   if(m%i==0 && n%i==0)
   {
     printf("%d",i);
     break;
   }
  }
 getch();
}