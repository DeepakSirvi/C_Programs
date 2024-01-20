void main()
{
  int i,j,k;
 while(1)
 { i=0,j=0,k=0;
  for(i=0;i<24;i++)
  {
   for(j=0;j<60;j++)
   {
    for(k=0;k<60;k++)
    {
       printf("\n\n\n\n\n%20d:%d:%d",i,j,k);
       delay(1000);
      clrscr();
       if(kbhit())
         exit(1);
    }

   }

  }

 }
 getch();
}