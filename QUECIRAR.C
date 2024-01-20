#define MAX_SIZE 5
int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
 return ((rear==MAX_SIZE-1&&front==0)||(front==rear+1))?1:0;
}

int isEmpty()
{
 return front==-1?1:0;
}

void enqueue(int data)
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
      queue[++rear]=data;
     }
   }
}


int peek()
{
 int data=-1;
 if(!isEmpty())
 {
   data = queue[front];
 }
 return data;
}

int dequeue()
{
 int data=-1;
 if(!isEmpty())
 {
   data=queue[front];
   if(rear==front)
   {
   front=rear=-1;
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

void show()
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

void main()
{
clrscr();
//printf("%d\n",isFull());
//printf("%d\n",isEmpty());
//printf("%d\n",peek());
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
//printf("%d\n",isFull());
//printf("%d\n",isEmpty());
//printf("%d\n",peek());
printf("%d\n",dequeue());
printf("%d\n",dequeue());
printf("%d\n",dequeue());
//printf("%d\n",dequeue());
enqueue(60);
//printf("%d\n",dequeue());
show();
printf("\n");
enqueue(100);
enqueue(200);
enqueue(300);
enqueue(400);
enqueue(500);
show();
getch();
}