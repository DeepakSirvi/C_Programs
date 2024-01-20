// Sum and print an 2 d array
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
  clrscr();
  printf("Enter the number");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
     scanf("%d",&a[i][j]);
     }
  }
    for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
     scanf("%d",&b[i][j]);
     }
  }
   for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
     printf("%d ",a[i][j]+b[i][j]);
     }
     printf("\n");
  }
getch();
}



















/*void main()
{
int i,j;
int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={9,8,7,6,5,4,3,2,1};
clrscr();
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 printf("%d ",a[i][j]+b[i][j]);
 }
 printf("\n");
 }
 getch();
 }*/