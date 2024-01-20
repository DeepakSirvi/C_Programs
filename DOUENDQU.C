#include<stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE],rear=-1,front=-1;

int isEmpty()
{
if(front==-1 && rear==-1)
return 1;
else
return 0;
}

int isFull()
{
 return (front==rear+1 || (front==0 && rear==MAX_SIZE-1))?1:0;
}

void enqueRear(int data)
{
 if(!isFull())
 {
   if(front==-1)
   {
    queue[++rear]=data;
    front=rear;
   }
   else if(rear==MAX_SIZE-1)
   {
      rear=0;
      queue[rear]=data;
   }
   else
   {
    queue[++rear]=data;
   }
 }
}

void enqueFront(int data)
{
  if(!isFull())
  {
    if(front==-1)
    {
    queue[++front]=data;
    rear=front;
    }
    else if(front==0)
    {
     front=MAX_SIZE-1;
     queue[front]=data;
    }
    else
    {
     queue[--front]=data;
    }
  }
}

int dequeFront()
{
 int data = -1;
  if(!isEmpty())
  {
    data = queue[front];
    if(front==rear)
    {
     rear=front=-1;
    }
    else if(front==MAX_SIZE-1)
    {
     front=0;
    }
    else
    {
     front++;
    }
  }
  return data;
}

int dequeRear()
{
 int data=-1;
 if(!isEmpty())
 {
    data=queue[rear];
     if(front==rear)
    {
     rear=front=-1;
    }
    else if(rear==0)
    {
     rear=MAX_SIZE-1;
    }
    else
    rear--;
 }
 return data;
}

void show()
{
 if(!isEmpty())
 {
  int i=front;
  if(front>rear)
   {
     for(;i<MAX_SIZE;i++)
     {
      printf("%d ",queue[i]);
     }
     for(i=0;i<=rear;i++)
     {
      printf("%d ",queue[i]);
     }
   }
  else
  {
   for(;i<=rear;i++)
   {
    printf("%d ",queue[i]);
   }
  }
  }
  else
  {
   printf("NULL");
  }
}


void main()
{
 clrscr();
//printf("%d\n",isFull());
// printf("%d\n",isEmpty());
enqueFront(10);
enqueRear(20);
enqueRear(30);
enqueFront(40);
enqueFront(50);
//printf("%d\n",dequeFront());
//printf("%d\n",dequeFront());
//printf("%d\n",dequeFront());
printf("%d\n",dequeRear());
printf("%d\n",dequeRear());
printf("%d\n",dequeRear());
//enqueRear(60);
show();
 getch();
}
