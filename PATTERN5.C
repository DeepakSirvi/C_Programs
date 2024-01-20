// Pattern
void main()
{
  int e,f,i,j;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&e,&f);
  for(i=0;i<=e;i++)
  { j=i+1;
   for( ;j<=f;j++)
   printf("%d %d\n",i,j);
  }

getch();
}


/*void main()
{
 int e,f;
 clrscr();
 e=0;
 while(e<=3)
 {
  f=e+1;
  while(f<=4)
  {
    printf("%d %d\n",e,f);
    f++;
  }
      e++;
    }
  getch();
  }
                    */