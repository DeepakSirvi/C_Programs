#include<stdio.h>
struct node
{
 int data;
 struct node *next;
}*front=NULL,*rear=NULL;

int isFull()
{
 return (rear==NULL && front!=NULL)?1:0;
}

int isEmpty()
{
 return front==NULL?1:0;
}

int deqeue()
{
 int data=-1;
 if(!isEmpty())
  {
   struct node *temp=front;
   data=temp->data;
   front=temp->next;
   temp->next==NULL;
   free(temp);
  }
 return data;
}


int inqeue(int data)
{
 if(!isFull())
  {
     struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
    if(front==NULL)
    {
      front=rear=temp;
      return 1;
    }
    else
    {
     rear->next=temp;
     rear=temp;
     return 1;
    }
  }
  return 0;
}

int peek()
{
 int data=-1;
 if(!isEmpty())
 {
  data=front->data;
 }
  return data;
}

void show()
{
if(!isEmpty())
{
 struct node *temp=front;
 while(temp!=NULL)
 {
  printf("%d->",temp->data);
  temp=temp->next;
 }
}
printf("NULL");
}


void main()
{
clrscr();
//printf("%d\n",isEmpty());
//printf("%d\n",isFull());
//printf("%d\n",peek());
inqeue(10);
inqeue(20);
inqeue(30);
inqeue(40);
deqeue();
deqeue();
deqeue();
deqeue();
//printf("%d\n",peek());
show();
printf("\n%d\n",isEmpty());
inqeue(10);
inqeue(20);
inqeue(30);
inqeue(40);
show();
getch();
}