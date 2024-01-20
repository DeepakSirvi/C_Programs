int isprime(int n)
{
int i=2,z=0;
while(i<=n/2)
{
 if(n%i==0)
 return  0;
 else
 return 1;
 i++;
 }
}





void main()
{
int x,s=0,r;
printf("Enter the Number");
scanf("%d",&x);
while(x!=0);
{
 r=r%10;
 x=x/10;
 s=s+r;
 }
 if(isprime(s))
 printf("%d is prime",s);
 else
 printf("%d is not prime",s);
getch();
}