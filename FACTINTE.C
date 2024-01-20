// Find a facotial between the interval
//If n is less then zero then start from 1
// With fuction
long fact(int n)
{
 int i;
 long f=1;
 for(i=1;i<=n;i++)
  f=f*i;
  return f;
}


void main()
{
  int a,b,i;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&a,&b);

  if(b<a)
  {
    a=a+b-(b=a);
  }
  // printf("%d%d",a,b);
  if(a<1)
  a=1;

  for(i=a;i<=b;i++)
  printf("%ld\n",fact(i));
getch();
}