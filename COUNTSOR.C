int maximum(int arr[],int size)
{
  int i=0,max=arr[0];
  for(i=1;i<size;i++)
  {
   if(arr[i]>max)
   max=arr[i];
  }
  return max;
}


void main()
{
 int max,i,j=0;
 int arr[]={3,1,5,6,7,3,4,5,1,2,3,6,9,7,5,6,1,11,12,14,15,15,12,11};
 clrscr();

 for(i=0;i<sizeof(arr)/2;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 max=maximum(arr,sizeof(arr)/2);
 {
  int *arr1=(int*)malloc(sizeof(int)*(max+1));

 for(i=0;i<(max+1);i++)
 {
    arr1[i]=0;
 }
 for(i=0;i<sizeof(arr)/2;i++)
 {
    arr1[arr[i]]=arr1[arr[i]]+1;
 }

 for(i=0;i<(max+1);i++)
 {
   while(arr1[i]>0)
   {
    arr[j++]=i;
    arr1[i]--;
   }
 }

 for(i=0;i<sizeof(arr)/2;i++)
 {
  printf("%d ",arr[i]);
 }
 // printf("%d",max);
}
 getch();
}
