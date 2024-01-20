// Reverse a number except  first and last digit of number

int rev(int n)
{
 int n1=0;
 for( ;n!=0;n=n/10)
  n1=n1*10+n%10;
return n1;
}

void main()
{
   int n,n1,f=0;
   clrscr();
   printf("Enter the number");
   scanf("%d",&n);
    n1=rev(n);
   for( ;n!=0;n=n/10)
     {
        if(!(f==0 || n<10))
           f=f*10+n%10;
              else
              f=f*10+n1%10;
              n1=n1/10;

     }

     printf("%d",f);
getch();
}



/*void main()
{
  int x,y,r,z,s=0;
  clrscr();
  printf("Enter the the number : ");
  scanf("%d",&x);
  z=x;
  y=reverse(x);
  printf("%d\n",y);
  while(x>0)
  {
    if(!(s==0 || x<10))
    {
      r=x%10;
      }
      else
      {
        r=y%10;
        }
        s=s*10+r;
        x=x/10;
        y=y/10;
        }
        printf("%d ---> %d",z,s);
        getch();
        }

// function to reverse a number
int reverse(int n)
{
  int r,s;
  while(n>0)
  {
    r=n%10;
    n=n/10;
    s=s*10+r;
    }
    return s;
    }
  */