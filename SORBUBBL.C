#include<stdio.h>
void bubbleSort(int arr[],int size)
{
 int i,j;
 for(i=0;i<size-1;i++)
 {

  for(j=i+1;j<size;j++)
  {
   if(arr[j]<arr[i])
   {
   arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
   }
  }
 }
}
void insersionSort(int a[],int size)
{
  int i,j,t;
  for(i=1;i<size;i++)
  {
   t=a[i];
   j=i-1;
   while(j>=0&&t<a[j])
   {
    a[j+1]=a[j];
    j--;
   }
   a[j+1]=t;
  }
}

 void selectionSort(int a[],int size)
 {
 int i,j,min;
 for(i=0;i<size-1;i++)
 {
   min=i;
   for(j=i+1;j<size;j++)
   {
   if(a[min]>a[j])
    min=j;
   }
   if(min!=i)
  a[i]=a[i]+a[min]-(a[min]=a[i]);

 }
 }
void main()
{
 int arr[]={5,7,19,9,8,4,3,12};
 int i;
 int n=sizeof(arr)/2;
 clrscr();
 //bubbleSort(arr,n);
 //insersionSort(arr,n);
 selectionSort(arr,n);
 for(i=0;i<n;i++)
printf("%d ",arr[i]);
 getch();
}