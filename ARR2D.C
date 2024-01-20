void main()
{
int i=0;
//int arr[5];
int a[2][3]={1};
clrscr();
//printf(" %u %u %u %u ",arr,arr+1,&arr+1,&arr[0]+1);
printf("%u %u %u %u %u %u %u",a,a+1,&a+1,a[0]+1,&a[0]+1,a[0][0],&a[0][0]+1);
getch();
}