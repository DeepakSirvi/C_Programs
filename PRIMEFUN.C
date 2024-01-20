int isprime(int n)
{
    int i;
    if(n<2)
    {return 0;
    }
     for(i=2;i<n;i++)
      {
      if(n%i==0)
         return 0;
       }
        return 1;

         }
void main()
{ int a,b,s=0;
clrscr();
printf("enter the number");
scanf("%d %d",&a,&b);
    while(a<=b)
      {
   if(isprime(a))
      {
    s=s+a;
      }
a++;
}
   printf("%d",s);
getch();
}
