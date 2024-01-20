// Print an even number between interval
void main()
{
  int a,b;
  clrscr();
  printf("Enter the number");
  scanf("%d%d",&a,&b);

  if(a>b)
  a=a+b-(b=a);
  for(;a<=b;a++)
  {
    if(a%2==0)
    printf("%d  ",a);
  }


getch();
}


/*
void main()
{
int a,b,i;
clrscr();
printf("Enter the number");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{if(i%2==0)
{printf("%d ",i);
}
}
 getch();
}  */