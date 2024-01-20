//Accept a array of 10 and sum the even term
void main()
{
  int a[10],i,sum=0;
  clrscr();
  printf("Enter the number : ");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
    if(a[i]%2==0)
    sum=sum+a[i];
    }
    printf("%d",sum);
getch();
}




/*
void main()
{
 int a[5],i,sum=0;
 clrscr();
 printf("Enter the array of 5");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 for(i=0;i<5;i++)
 {
  if(a[i]%2==0)
   sum=sum+a[i];
   }
   printf("%d",sum);
   getch();
   } */