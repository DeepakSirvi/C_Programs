void rev(int arr[],int i)
{
if(arr[i+1]!='\0')
rev(arr,i+1);
printf("%d ",arr[i]);
}
void main()
{
int arr[5]={1,2,3,4,5};
clrscr();
rev(arr,0);
getch();
}