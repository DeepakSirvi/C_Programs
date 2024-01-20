#include<stdio.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*tail=NULL,*temp=NULL;

int addToFirst(int data)
{
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=data;
  if(tail==NULL)
  {
  temp->next=temp;
  temp->prev=temp;
  tail=temp;
  }
  else
  {
   temp->next=tail->next;
   temp->prev=tail;
   tail->next=temp;
   temp->next->prev = temp;
  }
  return 1;
}

int addToLast(int data)
{
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 temp->next=tail->next;
 temp->prev=tail;
 tail->next->prev=temp;
 tail->next=temp;
 tail=temp;
 return 1;
}

int deleteToFirst()
{
 temp=tail->next;
 tail->next=temp->next;
 temp->next->prev=tail;
 temp->next=NULL;
 temp->prev=NULL;
 free(temp);
 return 1;
}
int deleteToLast()
{
temp=tail;
tail=tail->prev;
tail->next=temp->next;
temp->next->prev=tail;
temp->next=NULL;
temp->prev=NULL;
free(temp);
return 1;
}

void printData()
{
struct node *start=tail->next;
while(start!=tail)
{
printf("%d ->",start->data);
start=start->next;
}

if(tail!=NULL && tail!=NULL)
{
printf("%d ->",tail->data);
}
printf("NULL");


}




void printDatapev()
{
struct node *start=tail;
if(start==tail &&  tail!=NULL)
{
printf("%d ->",start->data);
start=start->prev;
}
while(start!=tail)
{
printf("%d ->",start->data);
start=start->prev;
}
printf("NULL");
}

void main()
{
clrscr();
printData();
printf("\n");

addToFirst(10);
addToFirst(20);
addToFirst(30);
addToFirst(40);
addToFirst(80);
printData();
printf("\n");
printDatapev();

addToLast(50);
addToLast(60);
addToLast(70);
printf("\n");
printData();

deleteToFirst();
deleteToFirst();
printf("\n");
printData();

deleteToLast();
deleteToLast();
printf("\n");
printData();

getch();
}