int isprime(int n)
{
int i,z=0;
for(i=2;i<=n/2;i++)
{
  if(n%2==0)
  { return 0;
    break;
    }
    }
    return 1;
    }


void main()
{
  int x,r,s=0;
  clrscr();
  printf("Enter the number : ");
  scanf("%d",&x);
  while(x!=0)
  {
   r=x%10;
   x=x/10;
   s=s+r;
   }
   if(isprime(s))
   printf("%d is prime",s);
   else
   printf("%d is not prime",s);
   getch();
   }