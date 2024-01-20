//Accept 5 number and find minimun
void main()
{
  int a[5],min,i;
  clrscr();
  printf("Enter the number : ");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  min=a[0];
  for(i=1;i<5;i++)
  {
    if(min>a[i])
    min=a[i];
  }
 printf("Max ==> %d",min);
getch();
}


//Accept 5 number and find the maximum
/*void main()
{
  int a[5],max,i;
  clrscr();
  printf("Enter the number : ");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  max=a[0];
  for(i=1;i<5;i++)
  {
    if(max<a[i])
    max=a[i];
  }
 printf("Max ==> %d",max);
getch();
} */

/*   void main()
   {
    int a[5],i,max,f;
    clrscr();
    printf("Enter the 5 number\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    max=a[0];
     for(f=0;f<5;f++)
     {
      if(max<a[f])
      max=a[f];
     }

     printf("Maximum number is : %d",max);
   getch();
   }*/