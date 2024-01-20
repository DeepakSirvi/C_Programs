//Accept ten number and add them
void main()
{
  int a[10],i,sum=0;
  clrscr();
  printf("Enter the number");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);

  for(i=0;i<10;i++)
  sum=sum+a[i];
  printf("%d",sum);
getch();
}



/*void main()
{
 int a[5],i,sum=0;
 clrscr();
 printf("Enter the array of 5 : ");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 for(i=0;i<5;i++)
  {
   sum=sum+a[i];
   }
   printf("%d",sum);
   getch();
   }*/