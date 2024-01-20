// Accept a array of 5 and find second max

void main()
{
  int a[5],i,max,smax=0;
  clrscr();
  printf("Enter the number \n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);

  max=a[0];
  for(i=1;i<5;i++)
    {
       if(max<a[i] )
       {
         smax=max;
         max=a[i];

       }
     else if(smax<a[i] && max>a[i])
        {
         smax=a[i];
        }
    }
    printf("max ==> %d\n smax ==> %d",max,smax);
getch();
}




















/*void main()
{
  int a[5];
  int i,j,x;
  clrscr();
  printf("Enter the number\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  for(i=0;i<5;i++)
  {
   j=i+1;
   for(;j<5;j++)
   {
     if(a[i]<a[j])
     {
      x=a[i];
     a[i]=a[j];
     a[j]=x;
     }
     }
     }
     for(i=0;i<4;i++)
     {
     if(a[i]!=a[i+1])
     {
     printf("Second maximun is %d \n",a[i+1]);
     break;
     }
     }

      for(i=4;i>0;i--)
      {
     if(a[i]!=a[i-1])
     {
     printf("Second minmum is %d ",a[i-1]);
     break ;
     }
     }

     getch();
     }
  */