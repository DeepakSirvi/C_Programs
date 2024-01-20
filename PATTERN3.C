// Print a pattern like 1 1, 1 2,1 3,2 1,2 2,2 3,3 1,3 2,3 3 ...

void main()
{
  int e,f,i,j;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&e,&f);
  for(i=1;i<=e;i++)
  {
    for(j=1;j<=f;j++)
    {
      printf("%d %d\n",i,j);
    }
  }

  getch();
}











/*void main()
{
 int e=1,f;
 clrscr();
while(e<f)
{
 f=1;
 while(f<=3)
 {
 printf("%d %d\n",e,f);
 f++;
 }
 e++;
 }


getch();
} */