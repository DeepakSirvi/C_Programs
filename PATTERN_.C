// make a pattern
// 1 2 0 3 -1 4 -2 5 -3 6
void main()
{
 int i,x=2,y=1,n;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 if(i%2==0)
 {
 printf("%d ",x);
 x++;
 }
 else
 {
   printf("%d ",y);
   y--;
 }
getch();
}