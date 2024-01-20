/* Pattern   with printf
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */

void main()
{
 int i;
 clrscr();
 for(i=1;i<=5;i++)
 printf("%.*s\n",i,"12345");

 getch();
}
/*void main()
{
int n,i=1,j;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(i<=n)
{ j=1;
  while(j<=i)
  {
   printf("%d",j);
   j++;
   }
   printf("\n");
   i++;
   }
   getch();
   }*/