#include<stdio.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*head=NULL,*temp=NULL;

int addToFirstPos(int data)
{
 temp = (struct node*)malloc(sizeof(struct node));
 temp->data=data;
 if(head==NULL)
 {
  temp->next=NULL;
  temp->prev=NULL;
  head=temp;
  return 1;
 }
 temp->prev=NULL;
 temp->next=head;
 head->prev=temp;
 head=temp;
 return 1;
}

int addToLastPos(int data)
{
struct node *start=head;
temp = (struct node*)malloc(sizeof(struct node));
temp->data=data;
while(start->next!=NULL)
{
start=start->next;
}
start->next=temp;
temp->prev=start;
temp->next=NULL;
return 1;
}

int addToNthPos(int data,int pos)
{
struct node *start=head;
int count=0;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
while(++count<pos-1)
{
start=start->next;
}
temp->next=start->next;
start->next->prev=temp;
start->next=temp;
temp->prev=start;
return 1;
}

int deleteFromFirst()
{
temp=head;
head=temp->next;
temp->next=NULL;
temp->prev=NULL;
free(temp);
return 1;
}

int deleteFromLast()
{
 struct node *start=head;
 while(start->next!=NULL)
 {
 start=start->next;
 }
 start=start->prev;
 temp=start->next;
 start->next=NULL;
 temp->next=NULL;
 temp->prev=NULL;
 free(temp);
 return 1;
}

int deleteFromNth(int pos)
{
int count=0;
struct node *start=head;
while(++count<pos-1)
{
start=start->next;
}
temp=start->next;
start->next=temp->next;
start->next->prev=start;
temp->next=NULL;
temp->prev=NULL;
free(temp);
return 1;
}


void printData()
{
 struct node *start=head;
 while(start!=NULL)
 {
  printf("%d->",start->data);
  start=start->next;
  }
  printf("NULL");
}

void main()
{
clrscr();
addToFirstPos(100);
addToFirstPos(200);
addToFirstPos(300);
addToFirstPos(400);
printData();
printf("\n");
addToLastPos(1);
addToLastPos(2);
addToLastPos(3);
addToLastPos(4);
printData();
printf("\n");
addToNthPos(12,5);
printData();
printf("\n");
deleteFromFirst();
printData();
printf("\n");
deleteFromLast();
printData();
printf("\n");
deleteFromNth(5);
printData();
//printf("%d",sizeof(struct node));


/*int data;
while(1)
  {
   int choice;
   printf("\n1: Add data at first");
   printf("\n2: Add data at last");
   printf("\n3: Add data at Nth");
   printf("\n4: Delete from first");
   printf("\n5: Delete from last");
   printf("\n6: Delete from Nth");
   printf("\n7: Display");
   printf("\n8: exit");
   printf("\n Enter your choice : ");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    {
    printf("\nEnter the data : ");
    scanf("%d",&data);
    if(addToFirstPos(data))
    {
    printf("\nData added successfully \n Press any key to procced");
    break;
    }
    }
    case 2:
    {

    }
   }


  }*/

getch();
}