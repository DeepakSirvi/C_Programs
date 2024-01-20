// Accept a number  and check it is prime or not , using function
int isprime(int n)
{
  long i;
  int f=0;
  for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
   {
   f=1;
   break ;
   }
   }
   if(f==0)
   return 1;
   else
   return 0;

}


void main()
{
  long n;
  clrscr();
  printf("Enter the number");
  scanf("%ld",&n);
  if(n<1)
  {
  printf("Invalid Input");
  return 0;
  }
  if(isprime(n)==1)
  printf("%ld is prime",n);
  else
  printf("%ld is not prime",n);
getch();
}


/*
void main()
{ int x,i,P,z=0;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
for(i=2;i<x;i++)
{if(x%i==0)
z=1;
}
if(z==1)

         printf(" Not prime number");
else
        printf("not prime no");


getch();
}
  */