int sump(int n,int sum)
{
  sum=sum+n;
  return sum;
}


void main()
{
 int a[10],i,sum=0;
 clrscr();
 printf("Enter the number");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 for(i=0;i<10;i++)
 {
   if(a[i]>0)
   sum=sump(a[i],sum);
 }
 printf("%d",sum);
getch();
}