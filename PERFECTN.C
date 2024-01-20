// Accept a number and check the number is perfect or not
void main()
{
  int n,i,t,s=0;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  t=n;
  for(i=1;i<=n/2;i++)
  {
  if(n%i==0)
  s=s+i;
  }

  if(s==t)
  printf("%d is perfect number",t);
  else
  printf("%d is not perfect number",t);

getch();
}




/*
void main()
{ int x,num,i,z;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
num=x;
z=0;
for(i=1;i<num;i++)
{if(num%i==0)
{
z=z+i ;
}
}
printf("%d\n",z);
if(x==z)
{printf("%d is perfect number",x);
}
else
{printf("%d is not perfect number",x) ;
}
getch();
} */