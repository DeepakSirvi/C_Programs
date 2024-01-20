// Print prime number between interval
// Condition :- If a is greater then b swip it

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
 int a,b,i;
 clrscr();
 printf("Enter the number");
 scanf("%d%d",&a,&b);

 if(a<1 && b<1)
 {
 printf("Invalid input");
 return 0;
 }

 if(b<a)
 a=a+b-(b=a);

 if(a<1)
 a=1;

   for(i=a;i<=b;i++)
   {
     if(isprime(i)==1)
     printf("%d\n",i);

   }
   getch();
   }



/*
int prime(int n)
{
int z=0,i=2;
while(i<n)
{if(n%i==0)
{z=1;
break;
} i++;
}
if(z==0)
{printf("%d ",n);
}
return n;
}
void main()
{int a,b;
clrscr();
printf("Enter the number : ");
scanf("%d%d",&a,&b);
while(a<=b)
{  prime(a);
a++;
}
getch();
}
  */