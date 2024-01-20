#include<stdio.h>
#include<conio.h>
/*
void main()
{ // Points are collinear or not using matrics
 int x1,x2,x3,y1,y2,y3;
 clrscr();
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 if(((x1-x2)*(y2-y3)+(y1-y2)*(x2-x3))==0)
 printf("colliner point ");
 else
 printf("Non colliner");
 getch();

} */
/*
void main()
{
  int x,y,a,b,r;
  clrscr();
  printf("Enter the centre of circle");
  scanf("%d%d",&x,&y);
  printf("Enter the radius");
  scanf("%d",&r);
  printf("Enter the number to check");
  scanf("%d%d",&a,&b);


  if(((x-a)*(x-a)+(y-b)*(y-b))>(r*r))
  printf("Outside the circle");
  else if(((x-a)*(x-a)+(y-b)*(y-b))<(r*r))
  printf("Inside the circle");
  else
  printf("On the circle");
 getch();
} */
/*
// Find maximun and minimum from the the value enter through user untill he wants
void main()
{
 int i,max,min;
 clrscr();
 printf("Enter the number");
 scanf("%d",&i);
 max=i ;
 min=i;
 while(i>=0)
 {
  scanf("%d",&i);
  if(i>max)
  max=i;
  else if(i<min)
  min=i;
 }
 printf("max ==> %d\nmin ==> %d",max,min);
 getch();
}*/
/*
// sum of series 1 +1/2 +1/3 + 1/4 ......+1/n
void main()
{
 int n,i;
 float ans=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  ans=ans+(float)1/i;
 }
 printf("%f",ans);

getch();
}    */
// sum of series 1 -1/2 +1/3 - 1/4 ......+1/n
/*
int main()
{
 int n,i;
 float ans=0;
 printf("Enter the number");
 scanf("%d",&n);
1
 for(i=1;i<=n;i++)
 {
 if(i%2==0)
 ans=ans-(float)1/i;
 else
  ans=ans+(float)1/i;
 }
 printf("%f",ans);

return 0;
} */
/*
// pattern
void main()
{
 int i,j,x=1,y,z=1;
 clrscr();
 scanf("%d",&i);
 y=i;
 for(j=1;j<=i;j++,y++,z+=2)
 {
   for(x=1;x<=y;x++)
   {
   if(x<=y-z)
   printf(" ");
   else
   printf("%d",j);
   }
   printf("\n");
 }
getch();
} */

 // pattern
 /*
      1
     212
    32123
   4321234 */
   /*
void main()
{
 int j,i,x,y,z;
 clrscr();
 scanf("%d",&i);
 z=i;
 for(y=1;y<=5;y++,i++,z--)
 { j=y;
   for(x=1;x<=i;x++)
   {

    if(x<z)
    printf(" ");
    else if(x>=z && x<5)
    {
     printf("%d",j);
     j--;
    }
    else
    {
    printf("%d",j);
    j++;
    }

   }
   printf("\n");

 }
 getch();
 }
  */

 // Sum of array element using pointer
 /*
 void main()
 {
   int a[5]={1,2,3,4,5},sum=0,i;
   int *j=a;
   clrscr();
   for(i=0;i<5;i++)
   {
    sum=sum+(*j);
    j++;
   }
   printf("%d",sum);
 getch();
 } */

 // C program to cyclically permute the element of an array
 /*
 void rev(int a[],int i,int j)
 {
  a[i]=a[i]+a[j-1]-(a[j-1]=a[i]);
  a[i+1]=a[i+1]+a[j]-(a[j]=a[i+1]);
 }
 void main()
 {
 static int arr[11],i,j;
 clrscr();
// printf("Enter the array size");
 // scanf("%d",&a);
  for(i=0;i<11;i++)
  {
   scanf("%d",&arr[i]);
  }
  j=i-1;
  for(i=0;i<j;i+=2,j-=2)
  if(j-i!=2)
  rev(arr,i,j);

  for(i=0;i<11;i++)
  printf("%d ",arr[i]);
  getch();
 } */
      /*
 // program to delete the specified integer from array
 #include<stdio.h>
 void main()
 {
  int sizeofarray,i,j;
  char ch;
  clrscr();
  printf("Enter the size of an array\n");
  scanf("%d",&sizeofarray);
  { int *arr=(int*)malloc(sizeofarray*sizeof(int));
 printf("Enter the elemt of an array\n");
 for(i=0;i<sizeofarray;i++)
 {
  scanf("%d",&arr[i]);
 }
 while(1)
 {
  printf("\nEnter the index of element to delete");
  scanf("%d",&i);
  for(j=i-1;j<sizeofarray;j++)
  {
  arr[j]=arr[j+1];
  }
  sizeofarray--;
   for(i=0;i<sizeofarray;i++)
 {
 printf("%d ",arr[i]);
 }
  ch=getch();
  if(ch==' ')
  exit(7);
 }

   }
 getch();
 }      */
 // Dynamic array
 void main()
 {
  int n,i;
  clrscr();
  scanf("%d",&n);
  {
   int a[n];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
  }
 getch();
 }