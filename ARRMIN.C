   void main()
   {
    int a[5],i,f,min;
    clrscr();
    printf("Enter the 5 number\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    min=a[0];
     for(f=0;f<5;f++)
     {
      if(min>a[f])
      min=a[f];
     }
     printf("Minimum number is : %d",min);
   getch();
   }