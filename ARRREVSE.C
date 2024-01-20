// Accept the 5 number and reverse it

void main()
{
 int a[5],i,j;
 clrscr();
 printf("Enter the Number");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 j=4;
 for(i=0;i<j;i++,j--)
 a[i]=a[i]+a[j]-(a[j]=a[i]);

  for(i=0;i<5;i++)
 printf("%d ",a[i]);

getch();
}