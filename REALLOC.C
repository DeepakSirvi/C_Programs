/*void main()
{
 int i;
 int *arr=(int *)malloc(sizeof(int)*5);
 int *arr1= (int *)calloc(sizeof(int),5);
 clrscr();
 for(i=0;i<4;i++)
 {
  arr[i]=i+10;
  arr1[i]=i+45;
  printf("%d %d\n",arr[i],arr1[i]);
 }
 getch();
}*/
void main()
{
  int i;
  int *arr=(int*)calloc(sizeof(int),5),*arr1;
  clrscr();
  for(i=0;i<5;i++)
  arr[i]=123+i;
  arr1=(int*)realloc(arr,5);
  for(i=5;i<10;i++)
  arr1[i]=40+i;
  for(i=0;i<10;i++)
  printf("%d  %d\n",arr1[i],arr[i]);
  getch();
}