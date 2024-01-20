#include<stdio.h>
struct node
{
int data;
struct node *next;
}*top=NULL,*temp=NULL;
void push(int data)
{
 temp = (struct node*)malloc(sizeof(struct node));
 temp->data=data;
 if(top==NULL)
 {
   temp->next=NULL;
   top=temp;
 }
 else
 {
  if(!isFull())

 {
  temp->next=top;
  top=temp;
 }
 }
}

int pop()
{
int data=-1;
if(!isEmpty())
{
temp = top;
data=temp->data;
top=top->next;
temp->next=NULL;
free(temp);
}
return data;
}

int peek()
{
int data=-1;
if(!isEmpty())
{
 data=top->data;
}
return data;
}


int isEmpty()
{
 return top==NULL?1:0;
}


int isFull()
{
return (temp==NULL && top!=NULL)?1:0;
}






void main()
{
clrscr();
//printf("%d\n", isFull());
// printf("%d\n", isEmpty());
   // push(10);
   // push(20);
    push(60);
    push(40);
   printf("%d\n", peek());
    printf("%d\n", pop());
     printf("%d\n", pop());
    printf("%d\n", peek());
     // printf("%d\n", isEmpty());
  //   printf("%d\n", isFull());
   getch();
}
