//Max even number in an array
void main()
{
  int a[5],i,maxeven;
  clrscr();
  printf("Enter the number");

  for(i=0;i<5;i++)
    scanf("%d",&a[i]);

  for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        maxeven=a[i];
        break;
    }
    if(i==5)
        printf("No even number");
     else
     {
       for(;i<5;i++)
       {
       if(maxeven<a[i] && a[i]%2==0)
       maxeven=a[i];
       }
       printf("maximum even number ==> %d",maxeven);

      }
getch();
}



/*void main()
{
  int a[10],i,max;
  clrscr();
  printf("Enter the number");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  for(i=0;i<10;i++)
  {
    if(a[i]%2==0)
    {
      max=a[i];
      break;
      }
      }
      if(i==10)
      printf("All are odd");
       else
       {
      for(;i<10;i++)
      {
       if(max<a[i] && a[i]%2==0)
       {
       max=a[i];
      }
      }
      printf("max %d",max);
      }
getch();
} */