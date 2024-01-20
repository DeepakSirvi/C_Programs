// Accept a number and check it is armstrong or not
//Use function

int pow(int n,int p)
{
  int f=1,i;
  for(i=1;i<=p;i++)
  f=f*n;
  return f;
}

int count(int n)
{
 int c=0;
 while(n!=0)
 {
 c++;
 n=n/10;
 }
 return c;
}

void main()
{
  int num,s=0,t,c;
  clrscr();
  printf("Enter the number");
  scanf("%d",&num);
  t=num;
  c=count(num);
  while(num!=0)
  {
    s=s+pow(num%10,c);
    num=num/10;
  }
  if(s==t)
  printf("%d is an Armstrong number",t);
  else
  printf("%d is not an Armstrong number",t);
  getch();
}

/*int count(int n)
{
 int c=0;
 while(n!=0)
 {
   c++;
   n=n/10;
 }
 printf("%d\n",c);
  return c;
}

int pow(int n,int p)
{  int i=1,f=1;
 while(i<=p)
 {
  f=f*n;
  i++;
 }
 printf("%d\n",f);
 return f;
 }



void main()
{
int x,num,c,r,z=0;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
num=x;
c=count(num);
for(;num!=0;num=num/10)
{
r=num%10;
z=z+pow(r,c);
}

 if(z==x)
 printf("%d is Armstrong number",x);

 else
 printf("%d is not Armstrong number",x);

getch();
} */