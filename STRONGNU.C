// Accept a number and check the number is strong or not.
int fact(int n)
{
 int i,f=1;
 for(i=1;i<=n;i++)
 f=f*i;
 return f;
}
void main()
{
  int n,t,s=0;
  clrscr();
  printf("Enter the number : ");
  scanf("%d",&n);
  t=n;
  for( ;n!=0;n=n/10)
  s=s+fact(n%10);

  if(t==s)
  printf("%d is strong number",t);
  else
  printf("%d is not strong number",t);


getch();
}


/*
void main()
{ int x,num,i,z,y,s=0;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
num=x;
for( ;num>0; )
{y=num%10;
printf("%d\n",y);
z=1;
for(i=1;i<=y;i++)
{z=z*i;
printf("%d\n",z);
}
s=s+z;
num=num/10;}
if(x==s)
{printf("%d is strong number",x);
}
else
{printf("%d is not a string number",x);
}
getch();
} */