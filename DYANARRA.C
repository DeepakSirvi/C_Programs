#include<stdio.h>
int *arr=NULL,size=-1,capacity=0;

int* allocationMemory(int len)
{
     int *p,i;
     capacity+=len;
     p=(int*)malloc(sizeof(int)*capacity);
    return p;
}

void add(int data)
{
 if(capacity==0 || capacity==size+1)
 {
  int *p=allocationMemory(5),i;
    for(i=0;i<=size;i++)
     {
      p[i]=arr[i];
     }
     free(arr);
     arr=p;
    }
 arr[++size]=data;
}

void show()
{
 int i;
 for(i=0;i<=size;i++)
 {
  printf("%d ",arr[i]);
 }
}

void main()
{
int i;
clrscr();
for(i=1;i<=8;i++)
{
 add(i*10);
}
show();
getch();
}     .