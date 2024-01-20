// Find power of given function

int pow(int n,int p)
{
  int f=1,i;
  for(i=1;i<=p;i++)
  f=f*n;
  return f;
}

void main()
{
  int n,p;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&n,&p);
  printf("%d",pow(n,p));
  getch();
}



/*int pow(int n,int p)
{
 int i=1,s=1;
 while(i<=p)
 {
   s=s*n;
   i++;
 }
return s;
}

void main()
{
 int n,p;
clrscr();
printf("Enter the base");
scanf("%d",&n);
printf("Enter the power");
scanf("%d",&p);
printf("%d",pow(n,p));
getch();

} */