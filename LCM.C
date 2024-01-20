
  // LCM of two number
  void main()

  {
  int n,m,i,s=1;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&n,&m);
  if(n>m)
  n=n+m-(m=n);
  for(i=2;i<=m;i++)
  {
   while(1)
    {
    if(n%i==0 && m%i==0)
     {
     printf("%d\n",i);
     n=n/i;
     m=m/i;
        s=s*i;
        }
        else if(n%i==0)
        {

        printf("%d\n",i);
        n=n/i;
        s=s*i;

        }
          else if(m%i==0)
          {
           printf("%d\n",i);
           m=m/i;
           s=s*i;
           }
           else
           break;
           }
    }

  printf("%d",s);
getch();
}