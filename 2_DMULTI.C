 void main()
{
int i,j;
int a[2][2]={1,2,3,4};
int b[2][2]={4,3,2,1};
int c[2][2];
clrscr();
  i=0;
  j=0;
 c[i][j]=(a[i][j]*b[i][j])+(a[i][j+1]*b[i+1][j]);
 i=0;
 j=1;
 c[i][j]=(a[i][j-1]*b[i][j])+(a[i][j]*b[i+1][j]);
 i=1;
 j=0;
 c[i][j]=(a[i][j]*b[i-1][j])+(a[i][j+1]*b[i][j]);
 i=1;
 j=1;
 c[i][j]=(a[i][j-1]*b[i-1][j])+(a[i][j]*b[i][j]);
  for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 printf("%d ",c[i][j]);
 }
 printf("\n");
 }
 getch();
 }