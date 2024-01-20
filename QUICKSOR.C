void swap(int *x,int *y)
{
*x=*x+*y-(*y=*x);
}

int partition(int a[],int start,int end)
{
 int i=start,j=end,pivot=a[start];
 do{
   do{i++;}while(pivot>=a[i]);
   do{j--;}while(pivot<a[j]);
   if(i<j)
   swap(&a[i],&a[j]);
 }while(i<j);
 swap(&a[j],&a[start]);
 return j;  // j is pivot
}

void quick(int a[],int start,int end)
{
int j;
 if(start<end)
 {
   j=partition(a,start,end);
   quick(a,start,j);
   quick(a,j+1,end);
 }
}

void main()
{
 int i,a[]={50,10,40,90,60,80,70,30,90};
 clrscr();
 quick(a,0,9);
 for(i=0;i<9;i++)
 printf("%d ",a[i]);
 getch();
}


