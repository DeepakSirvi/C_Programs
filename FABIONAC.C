// Accept a numbwer from user upto which we have to print series.
//Series patteren is next term is sum of previous 2 given that first number is 0 and second is 1

void main()
{
  int x,y,n,z;
  clrscr();

  printf("Enter the number");
  scanf("%d",&n);
  x=0;
  y=1;
   for( ;x<=n; )
   {
   printf("%d\n",x);
   z=x+y;
   x=y;
   y=z;
   }

getch();
}



/*void main()
{
  int n,x=0,y=1,i=1,z;
  clrscr();
  printf("Enter the number : ");
  scanf("%d",&n);
  while(i<=n)
  {
   printf("%d\n ",x);
  z=x+y;
  x=y;
  y=z;
  i++;

   }
getch();
}  */