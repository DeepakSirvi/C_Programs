// Sum of even digit of a number
void main()
{
  int n,s=0;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);

  for( ;n!=0;n=n/10)
  {
    if((n%10)%2==0)
      s=s+n%10;
  }
  printf("%d",s);
  getch();
}



/*
void main()
{ int a,b,i,sum=0;
clrscr();
printf("enter the number ");
scanf("%d%d",&a,&b);
while(b>=a)
{if(a%2==0)
{sum=sum+a;
}
a++;
}
printf("%d",sum);
getch();
} */