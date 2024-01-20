
void swap(int *a,int *b)
{
*a=*a+*b-(*b=*a);
}

void mergesort(int arr[],int start,int end,int mid)
{
  int i=start,j=mid+1,k=start;
  int* temp=(int*)(malloc(sizeof(int*)*end));
  while(i<=mid && j<=end)
  {
    if(arr[j]<arr[i])
    {
     temp[k]=arr[j];
     j++;
     k++;
    }
    else
    {
     temp[k]=arr[i];
     i++;
     k++;
    }
  }
  while(i<=mid)
  {
   temp[k]=arr[i];
   i++;
   k++;
  }
  while(j<=end)
  {
   temp[k]=arr[j];
   j++;
   k++;
  }
  for(i=start;i<k;i++)
  {
   arr[i]=temp[i];
  }
}
void merge(int arr[],int start,int end)
{
 int j=(start+end)/2;
 if(start<end)
 { printf("%d %d %d\n",start,j,end);

  merge(arr,start,j);
   merge(arr,j+1,end);
mergesort(arr,start,end,j);
 }
}


void main()
{
 int arr[]={5,8,2,7,3,6,9,1};
 int i,size=sizeof(arr)/2;
 clrscr();
 merge(arr,0,size-1);
 for(i=0;i<size;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
}