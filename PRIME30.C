// Find such pair of prime number betwwen 1 to 50 that their sum is 50

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
  int i=0,j=50;
  clrscr();

     for( ;i<j;i++,j--)
     {
       if(isprime(i) && isprime(j))
         printf("%d %d\n",i,j);
     }
getch();
}


/*int isprime(int n)
{
    int i;
    if(n<2)
    {
      return 0;
      }
      for(i=2;i<n;i++)
      {
        if(n%i==0)
        return 0;
        }
        return 1;
}
void main()
{
  int a=1,b=30;
  clrscr();
  while(a<=b/2)
  {
    if(isprime(a) && isprime(b-a))
    {
         printf("%d %d\n",a,b-a);
          }
          a++;
          }
          getch();
          }




  */