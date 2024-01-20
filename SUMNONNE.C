int sump(int n, int sum)
{
  sum=sum+n;

return sum;
}

void main()
{
 int n,sum=0;
 clrscr();
   while(1)
  {
   printf("Enter the number  : ");
   scanf("%d",&n);
   if(n<0)
   { printf("%d\n",sum);
   break;
   }
   else
   {
   sum=sump(n,sum);
 }
  }
getch();
}