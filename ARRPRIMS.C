int isprime(int n)
{
 int i,f=0;
 for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
      {
       f=1;
       break;

      }

    }

    if(f==0)
    return 1;
    else
    return 0;
}


void main()
{
  int a[10],i,sum=0;
  clrscr();
  printf("Enter the Number");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);

 for(i=0;i<10;i++)
 {
  if(isprime(a[i]))
  sum=sum+a[i];
 }
 printf("%d",sum);
getch();
}