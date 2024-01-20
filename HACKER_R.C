void main()
{
  int n,i,j,a=1;
  // int b[5][5];
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  {
  // int b[5][5];
  }

  for(i=1;i<=n;i++)
    {
      for(j=1;j<n*2;j++)
      {
        if(i==a || j==a)
         printf("%d ",n-a+1);
         else
         printf("  ");



      }
      a++;
      printf("\n");
    }


getch();
}
