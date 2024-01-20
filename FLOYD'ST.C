
 // Floyd's triangle
 void main()
{
   int i,j,x=1;
   clrscr();
   for(i=1;i<=5;i++)
     {
      for(j=1;j<=i;j++,x++)
      {
      if(x<10)
      printf("0%d ",x);
      else
      printf("%d ",x);
      }
      printf("\n");
      }
      getch();
      }