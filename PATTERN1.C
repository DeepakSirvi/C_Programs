// pattern ising print
/*
*
**
***
****
*****
*/


void main()
{
  int i,n;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
  printf("%*.*s\n",i,i,"*****************************************");
  }

getch();
}



/*void main()
{  int i=1,n,j;
clrscr();
printf("Enter the number : ");
scanf("%d",&n);
while(i<=n)
{
j=1;
 while(j<=i)
 {
 printf("*");
 j++;
 }
 printf("\n");
 i++;
 }
 getch();
 }*/