#include<stdio.h>
struct node
{
  int data;
  struct node *next;
}*tail=NULL,*temp=NULL;
int nodeCount=0;

// To add a node at first position
int addToFirstPos(int data)
{
 temp = (struct node*)malloc(sizeof(struct node));
 temp->data=data;
 if(tail==NULL)
 {
 tail=temp;
 temp->next=temp;
 }
 else
 {
 temp->next=tail->next;
 tail->next=temp;
 }
 return 1;
}


// To add data at last
int addToLastPos(int data)
{
   temp = (struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next = tail->next;
   tail->next = temp;
   tail=temp;
   return 1;
}


// To add data at nth position
int addToNthPos(int data,int position)
{
 struct node *start = tail->next;
 int i=0;
 temp = (struct node*)malloc(sizeof(struct node));
 temp->data=data;
 while(++i<position-1)
 {
  start=start->next;
 }
 temp->next=start->next;
 start->next=temp;
 return 1;
}


// To delete data from first position
int deleteFromFirstPos()
{
 if(tail==tail->next)
 {
  tail=NULL;
  free(tail);
  return 1;
 }
 temp=tail->next;
 tail->next = tail->next->next;
 temp->next=NULL;
 free(temp);
 return 1;
}


// To delete from last position
int deleteFromLastPos()
{
 struct node *start=tail->next;
 while(start->next!=tail)
 {
  start=start->next;
 }
 temp=start->next;
 start->next=temp->next;
 tail=start;
 temp->next=NULL;
 free(temp);
 return 1;
}


// Delete data from nth position
int deleteFromNthPos(int position)
{
 struct node *start=tail->next;
 int i=0;
 while(++i<position-1)
 {
  start=start->next;
 }
 temp=start->next;
 start->next=temp->next;
 temp->next=NULL;
 free(temp);
 return 1;
}

// To print the data
void printData()
{
 struct node *start = tail->next;
 while(start->next!=tail->next)
 {
  printf("%d ->",start->data);
  start=start->next;
 }
 if(start->next==tail->next && tail!=NULL)
 printf("%d->",tail->data);
 printf("NULL");
}

void main()
{
  int data,choice;
  while(1)
  { clrscr();
    printf("\n1 : Add data at first position");
    printf("\n2 : Add data at lastposition");
    printf("\n3 : Add data at nth position");
    printf("\n4 : Add data at before nth position");
    printf("\n5 : Add data at after nth position");
    printf("\n6 : Delete data from first position");
    printf("\n7 : Delete data from last position");
    printf("\n8 : Delete data from nth positin");
    printf("\n9 : To Display");
    printf("\n11: To exit");
    printf("\nEnter your choice : ");
    fflush(stdin);
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
            {
             printf("\nEnter the data : ");
             scanf("%d",&data);
             if(addToFirstPos(data))
             { nodeCount++;
              printf("\nData Successfully added \nPress any key to procced");
              getch();
              break;
             }
            }
       case 2:
             {
             printf("\nEnter the data : ");
             scanf("%d",&data);
             if(tail==NULL)
              {  nodeCount++;
               if(addToFirstPos(data))
               {
                printf("\nData Successfully added \nPress any key to procced");
                getch();
                break;
               }
              }
             if(addToLastPos(data))
             {  nodeCount++;
              printf("\nData Successfully added \nPress any key to procced");
              getch();
              break;
             }
            }
       case 3:
             {
             int position;
             printf("\nEnter the position : ");
             scanf("%d",&position);
             printf("\nEnter the data : ");
             scanf("%d",&data);
             if(tail==NULL || position==1)
              {
               if(addToFirstPos(data))
               {
                nodeCount++;
                printf("\nData Successfully added \nPress any key to procced");
                getch();
                break;
               }
              }
              if(position>=nodeCount+1)
              {
              if(addToLastPos(data))
             {  nodeCount++;
              printf("\nData Successfully added \nPress any key to procced");
              getch();
              break;
             }
             }
             if(addToNthPos(data,position))
             {
              nodeCount++;
              printf("\nData Successfully added \nPress any key to procced");
              getch();
              break;
             }
             }
       case 4:
             {
             int position;
             printf("\nEnter the position : ");
             scanf("%d",&position);
             printf("\nEnter the data : ");
             scanf("%d",&data);
             if(tail==NULL || position==1)
              {
               if(addToFirstPos(data))
               {
                nodeCount++;
                printf("\nData Successfully added by first \nPress any key to procced");
                getch();
                break;
               }
              }
              if(position>=nodeCount+1)
              {
              if(addToLastPos(data))
             {  nodeCount++;
              printf("\nData Successfully added by last \nPress any key to procced");
              getch();
              break;
             }
             }
             if(addToNthPos(data,position-1))
             {
              nodeCount++;
              printf("\nData Successfully added before \nPress any key to procced");
              getch();
              break;
             }
             }
       case 5:
             {
             int position;
             printf("\nEnter the position : ");
             scanf("%d",&position);
             printf("\nEnter the data : ");
             scanf("%d",&data);
             if(tail==NULL && position==1)
              {
               if(addToFirstPos(data))
               {
                nodeCount++;
                printf("\nData Successfully added by first \nPress any key to procced");
                getch();
                break;
               }
              }
              if(position>=nodeCount)
              {
              if(addToLastPos(data))
             {  nodeCount++;
              printf("\nData Successfully added by last \nPress any key to procced");
              getch();
              break;
             }
             }
             if(addToNthPos(data,position+1))
             {
              nodeCount++;
              printf("\nData Successfully added after \nPress any key to procced");
              getch();
              break;
             }
             }
       case 6:
           {
           if(tail==NULL)
           {
           printf("\nNothing to delete");
           getch();
           break;
           }
           if(deleteFromFirstPos())
           {
           nodeCount--;
           printf("\nData deleted from first position \nPress any key to procced");
           getch();
           break;
           }
           }
       case 7:
               {
           if(tail==NULL)
           {
           printf("\nNothing to delete");
           getch();
           break;
           }
           if(tail==tail->next)
           {
            if(deleteFromFirstPos())
           {
           nodeCount--;
           printf("\nData deleted from first position \nPress any key to procced");
           getch();
           break;
           }
           }
           if(deleteFromLastPos())
           {
           nodeCount--;
           printf("\nData deleted from last position \nPress any key to procced");
           getch();
           break;
           }
           }
       case 8:
              {
              int position;
           if(tail==NULL)
           {
           printf("\nNothing to delete");
           getch();
           break;
           }
           printf("\nEnter the position which have to delete : ");
           scanf("%d",&position);
           if(tail==tail->next || position==1)
           {
            if(deleteFromFirstPos())
           {
           nodeCount--;
           printf("\nData deleted from first position \nPress any key to procced");
           getch();
           break;
           }
           }
           if(deleteFromNthPos(position))
           {
           nodeCount--;
           printf("\nData deleted from nth position \nPress any key to procced");
           getch();
           break;
           }
           }
       case 9:
            {
             printData();
             printf("\nPress any key to procced \nNumber of nodes %d",nodeCount);
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
