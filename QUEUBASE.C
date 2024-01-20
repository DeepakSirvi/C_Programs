#include<stdio.h>
#define MAX_SIZE 10
int enque(int data);
int deque();
int isEmpty();
int isFull();
int peek();
int queue[MAX_SIZE];
int front=-1,rear=-1;


int enque(int data)
{

 if(front==-1)
 {
  queue[++front]=data;
  rear++;
  return 1;
 }
 else if(!isFull())
 {
 queue[++rear]=data;
 return 1;
 }
 return 0;
}

int deque()
{
 int data = -1;
 if(!isEmpty())
 {
  data= queue[front];
  front++;
 }
 return data;
}

int isEmpty()
{
 return (front==-1)?1:0; // Problem when front is greater then rear
}
int isFull()
{
  return rear==MAX_SIZE-1?1:0;
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


void show()
{
 int i = front;
 if(!isEmpty())
 {
 for(;i<=rear;i++)
 {
  printf("\n%d",queue[i]);
 }
 }
 else
 printf("\nNULL");
}


void main()
{
/*
 clrscr();
// printf("%d",isFull());
// printf("%d",isEmpty());
 enque(10);
 enque(20);
 enque(30);
// printf("%d\n",deque());
// printf("%d\n",deque());
// printf("%d\n",peek());
 enque(40);
 enque(50);
//show();
//printf("%d\n",deque());
//printf("%d\n\n\n",peek());
  enque(60);
 enque(80);
 enque(90);
 // printf("%d\n",isFull());
 enque(780);
 enque(340);
 enque(200);
 enque(223);
 enque(13132);
// printf("%d\n",deque());
// printf("%d\n",peek());
// printf("%d\n",isFull());
show(); */
 int data;
 while(1)
 {
  int choice;
  clrscr();
  printf("\n1: To Insert");
  printf("\n2: To dequeue");
  printf("\n3: To peek");
  printf("\n4: To check empty");
  printf("\n5: To check full");
  printf("\n6: To show");
  printf("\n7: Exit");
  printf("\nEnter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    printf("Enter the data");
    scanf("%d",&data);
    if(!isFull())
    {
    enque(data);
    printf("Added successfully");
    }
    else
    {
     printf("Stack full");
    }
    getch();
    break;
   }
   case 2:
   {
    if(!isEmpty())
    {
    printf("%d",deque());
    }
    else
    {
    printf("Stack is empty");
    }
    getch();
    break;
   }
   case 3:
   {
    if(!isEmpty())
    {
     printf("%d",peek());
    }
    else
    {
    printf("Stack is empty");
    }
    getch();
    break;
   }
   case 4:
   {
   if(isEmpty())
   printf("Stack is empty");
   else
   printf("Stack is not empty");
   getch();
    break;
    }
   case 5:
   {
   if(isFull())
     printf("Stack is full");
   else
   printf("Stack is not full");
   getch();
   break;
   }
   case 6:
   {
    show();
    getch();
    break;
   }
   default:
   {
   exit(0);
   }
  }
 }
}