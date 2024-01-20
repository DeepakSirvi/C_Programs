int isPrime(int n)
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
        return n;

        return 0;


}

void main()
{
 int a,b,i,s=0;
 clrscr();
 printf("Enter the number");
 scanf("%d%d",&a,&b);
 {
 for(i=a;i<=b;i++)
 {
 if(isPrime(i))
 s=s+i;
 }
 }
 printf("%d",s);
 getch();
}
