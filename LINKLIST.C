#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*temp=NULL,*head=NULL;
int count=0;
// To add at last position

int addToLastPos(int data)
{
     if(head==NULL)
     {
       addToFirstPos(data);
       return 1;
     }
     else
     {
	struct node *start=head;
	temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;

	while(start->next!=NULL)
	{
		start=start->next;
	}
	start->next = temp;

	return 1;
        }
}
// To add at nth position


int addToNthPos(int data,int nodenum)
{ int i;
 struct node *start=head;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 {
 for(i=1;i<nodenum-1;i++)
 {
   start=start->next;
 }
 temp->next = start->next;
 start->next=temp;
 }
 return 1;

}
 // To add at first position

int addToFirstPos(int data)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
	return 1;
}
// To delete from first position


int deleteToFirstPos()
{
 temp=head;
 head=head->next;
 temp->next=NULL;
 free(temp);
 return 1;
}
// To delete from last position

int deleteToLastPos()
{
struct node *start=head;
while(start->next->next!=NULL)
{
start=start->next;
}
temp=start->next;
start->next=NULL;
free(temp);
return 1;
}
 // To delete from nth position

int deleteToNthPos(int pos)
{
struct node *start=head;
int count=0;
while(++count<pos-1)
{
start=start->next;
}
temp=start->next;
start->next=temp->next;
temp->next=NULL;
free(temp);
return 1;
}

void reverseList()
{
if(head!=NULL)
{
 struct node *current=head,*prev=NULL,*temp=NULL;
 while(current!=NULL)
 {
    temp=current->next;
    current->next=prev;
    prev=current;
    current=temp;
 }
 head=prev;
 }
 }


 void revRecursion(struct node *prev,struct node *start)
{
  head=start;
  if(start->next!=NULL)
 {
 revRecursion(start,start->next);
 }
  start->next=prev;
}



struct node* revGrpRec(int k,struct node *current)
{
int c=0;
if(current==NULL)
return NULL;
else
{
 struct node *prev=NULL,*temp=NULL,*start=current;
 while(current!=NULL && ++c<=k)
 {
   temp=current->next;
    current->next=prev;
    prev=current;
    current=temp;
 }
start->next=revGrpRec(k,current);
 return prev;
 }
}

int MidNode()
{
 int data=-1;
 struct node *p=head,*p1=head;
 while(p1->next!=NULL)
 {
  p=p->next;
  p1=p1->next->next;
 }
  if(p!=NULL)
 {
  data= p->data;
 }
 return data;
}


void createLoop()
{
  struct node *start=head,*temp=NULL;
  temp=start;
  while(start->next!=NULL)
  {
   start=start->next;
  }
  start->next=temp;
}


/*
int detect(struct node *p,struct node*p1)
{
  if(p->next!=p1->next && p1!=NULL )
  {
    printf("\nred %d  %d ",p->data,p1->data);
   detect(p->next,p1->next->next);

  }
  else if(p1==NULL)
  {
   return 0;
  }
  else
  return 1
  }*/
struct node* detect()
{
 struct node *s=head,*f=head;
do {
  // printf("\nred %d  %d ",s->data,f->data);
   s=s->next;
   f=f->next->next;
  } while(s!=f && f!=NULL);
  if(f==NULL)
  return NULL;
  else
  return s;
}

// Nth Node from end of linked list
int NthNodeEnd(int l,int n)
{
 struct node *start=head;
 int num=l-n,c=0;
 if(num<0 || n<=0)
 return -1;
 while(++c<=num)
 {
  start=start->next;
 }
 return start->data;
}



void Remove()
{
 struct node *p=head,*p1=detect();
 if(p1==head)
 {
  while(p1->next!=head)
  {
   p1=p1->next;
  }
  p1->next=NULL;
 }
 else
 {
 while(p->next!=p1->next)
 {
 p= p->next;
 p1=p1->next;
 }
 p1->next=NULL;
 }
}


void duplicate()
{
 struct node *start=head,*sec=head->next;
 while(start!=NULL)
 {
  while(sec!=NULL)
  {
    if(start->data==sec->data)
    {
      start->next=sec->next;
    }
    else
    {
     break;
    }
    sec=sec->next;
  }
  start=start->next;
 }
}
// Delete N node after N node
void DelNAfterM(int m,int n)
{
  struct node *start=head;
  while(start!=NULL)
  {
   int cm=0,cn=0;
   while(++cm<=m && start!=NULL)
   {
    if(start==head)
    cm++;
    if(m!=1)
    start=start->next;
   }
   temp=start;
   while(++cn<=n && start!=NULL)
   {
     start=start->next;
   }
   temp->next=start->next;
  }
}

// Print all data
void printData()
{
	struct node *start=head;
	printf("\n");
	while(start!=NULL)
	{
       printf("%d -> ",start->data);
       start = start->next;
	}
	printf("NULL");
}
// Crete new list from two sorted list in sorted order
struct node* AddSorted(struct node* head1,struct node* head2)
{
 struct node*start1=head1,*start2=head2;
 while(start1!=NULL && start2!=NULL)
 {
   if(start1->data<start2->data)
   {
      addToLastPos(start1->data);
      start1=start1->next;
   }
   else
   {
    addToLastPos(start2->data);
    start2=start2->next;
   }
   }
   if(start1!=NULL)
   {
    while(start1!=NULL)
    {
      addToLastPos(start1->data);
      start1=start1->next;
    }
   }
   if(start2!=NULL)
   {
    while(start2!=NULL)
    {
         addToLastPos(start2->data);
         start2=start2->next;
    }
   }

 return head;
}
// Reverse the list in k group in alternate order
struct node* revGrpRecAlt(int k,struct node *current,int n)
{
int c=0;
if(current==NULL)
return NULL;
else if(n%2!=0)
{
 struct node *prev=NULL,*temp=NULL,*start=current;
 while(current!=NULL && ++c<=k)
 {
    temp=current->next;
    current->next=prev;
    prev=current;
    current=temp;
 }
start->next=revGrpRecAlt(k,current,++n);
 return prev;
 }
 else
 {
  struct node *start=current;
   while(current!=NULL && ++c<k)
   {
    current=current->next;
   }
  current->next=revGrpRecAlt(k,current->next,++n);
  return start;
 }
}
int pow(int n,int p)
{
 int i=0,sum=1;
 while(i++<p)
 {
  sum*=n;
 }
   return sum;
}
int countDigit(int n)
{ int c=0;
  while(n!=0)
  {
   c++;
   n/=10;
  }
  return c;
}
struct node* updatedList(int sum)
{
 //int n=pow(10,c-1);
  while(sum!=0)
 {
 addToFirstPos(sum%10);
 sum=sum/10;
 }
 return head;
}

struct node* sumN(int n)
{
 struct node* current=head;
 int sum=0,c=0;
 while(current!=NULL)
 {
  sum=sum*10+current->data;
  current=current->next;
 }
 sum=sum+n;
 head=NULL;
// c=countDigit(sum);
 head=updatedList(sum);
 return head;
}


void main()
{
struct node *head1,*head2,*head3;
clrscr();
addToFirstPos(1);
addToLastPos(2);
addToLastPos(3);
addToLastPos(4);
//addToLastPos(5);
//addToLastPos(6);
//addToLastPos(7);
//addToLastPos(8);
//addToLastPos(9);
//addToLastPos(10);
printData();
//head=sumAdd(567);

//head1=head;
//head=NULL;
//addToFirstPos(1);
//addToLastPos(2);
//addToLastPos(3);
//addToLastPos(4);
//addToLastPos(5);
//addToLastPos(16);
//addToLastPos(17);
//addToLastPos(18);
//addToLastPos(19);
//addToLastPos(20);
//head2=head;
//printData();
//head=NULL;
//head3= AddSorted(head1,head2);
//head=head3;
//DelNAfterM(1,1);
//duplicate();
//createLoop();
//revRecursion(NULL,head);
//reverseList();
head=revGrpRec(2,head);
//printf("\n%d\n",MidNode());
//printf("\n%d\n",detect(head,head->next->next));
//printf("\n%u\n",detect());
//Remove();
//printf("\n%d",NthNodeEnd(4,2));
//head=revGrpRecAlt(3,head,1);
//head=sumN(564);
printData();
getch();

      /*	int data;
	while(1)
	{
		int choice;
		clrscr();
		printf("\n1 : To add data at last position ");
		printf("\n2 : To add data at first position");

                printf("\n3 : To add data at nth position");
                printf("\n4 : To add data before nth position");
                printf("\n5 : To add data after nth position");
                printf("\n6 : To delete from first position");
                printf("\n7 : To delete from last position");
                printf("\n8 : To delete from nth position");
                printf("\n9 : To delete before nth position");
                printf("\n10 : To delete after nth position");
		printf("\n11 : Display the data");
		printf("\n12 : To exit");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			{
				printf("\nEnter the data : ");
				scanf("%d",&data);
                                if(head==NULL)
                                {
                                   	if(addToFirstPos(data))
				{       count++;
					printf("\n Data added successfully \n Press any key to procced");
					getch();
					break;
				}

                                }
				if(addToLastPos(data))
				{     count++;
					printf("\n Data added successfully \n Press any key to procced");
					getch();
					break;
				}
			}
		case 2:
			{
				printf("\nEnter the data : ");
				scanf("%d",&data);
				if(addToFirstPos(data))
				{       count++;
					printf("\n Data added successfully \n Press any key to procced");
					getch();
					break;
				}

			}
                case 3:
                         {     int position;
                                printf("Enter the position at which you want to insert");
                                scanf("%d",&position);
                                if(position>count+1 || position<=0)
                                {
                                 printf("\nPosition is out of range \nPress any key to procced");
                                 getch();
                                 break;
                                }
                                printf("\nEnter the data : ");
				scanf("%d",&data);
                                if(position==1)
                                {
                                  	if(addToFirstPos(data))
				{       count++;
					printf("\n Data added successfully by addtofirst\n Press any key to procced");
					getch();
					break;
				}
                                }
                                if(position==count+1)
                                {
                                  	if(addToLastPos(data))
				{     count++;
					printf("\n Data added successfully by addtolast \n Press any key to procced");
					getch();
					break;
				}
                                }
			       if(addToNthPos(data,position))
				{       count++;
					printf("\n Data added successfully \n Press any key to procced");
					getch();
					break;
				}
                          }
                case 4:
                      {
                                int position;
                                printf("Enter the position before which you want to insert");
                                scanf("%d",&position);
                                if(position>count+1 || position<=0)
                                {
                                 printf("\nPosition is out of range \nPress any key to procced");
                                 getch();
                                 break;
                                }
                                  printf("\nEnter the data : ");
				scanf("%d",&data);
                                      if(position==1)
                                {
                                  	if(addToFirstPos(data))
				{       count++;
					printf("\n Data added successfully by addtofirst\n Press any key to procced");
					getch();
					break;
				}
                                }
			       if(addToNthPos(data,position-1))
				{       count++;
					printf("\n Data added successfully before nth position \n Press any key to procced");
					getch();
					break;
				}

                      }
                       case 5:
                      {
                                int position;
                                printf("Enter the position after you want to insert");
                                scanf("%d",&position);
                                if(position>count+1 || position<=0)
                                {
                                 printf("\nPosition is out of range \nPress any key to procced");
                                 getch();
                                 break;
                                }
                                printf("\nEnter the data : ");
				scanf("%d",&data);
                                if(position==count)
                                {
                                    	if(addToLastPos(data))
				{     count++;
					printf("\n Data added successfully by addtolast \n Press any key to procced");
					getch();
					break;
				}
                                }
			       if(addToNthPos(data,position+1))
				{       count++;
					printf("\n Data added successfully after nth position \n Press any key to procced");
					getch();
					break;
				}

                      }
                case 6:
                        {
                               if(count==0)
                               {
                                printf("\nNothing to delete \n Press any key to procced");
                                head=NULL;
                                getch();
                                break;
                               }
                               if(deleteToFirstPos())
                               {
                                printf("\nNode delete from first position \nPress any key to procced");
                                count--;
                                getch();
                                break;
                               }
                        }
                case 7:
                        {

                               if(count==0)
                               {
                                printf("\nNothing to delete \n Press any key to procced");
                                head=NULL;
                                getch();
                                break;
                               }
                               if(deleteToLastPos())
                               {
                                printf("\nNode delete from last position \nPress any key to procced");
                                count--;
                                getch();
                                break;
                               }
                        }
                case 8:
                         {     int position;
                                 if(count==0)
                               {
                                printf("\nNothing to delete \n Press any key to procced");
                                head=NULL;
                                getch();
                                break;
                               }
                                printf("Enter the position at which you want to insert");
                                scanf("%d",&position);
                                if(position>count+1 || position<=0)
                                {
                                 printf("\nPosition is out of range \nPress any key to procced");
                                 getch();
                                 break;
                                }
                                if(position==1)
                                {
                                  	if(deleteToFirstPos())
				{       count--;
					printf("\n Data deleted successfully by deleteofirst\n Press any key to procced");
					getch();
					break;
				}
                                }
                                if(position==count)
                                {
                                  	if(deleteToLastPos())
				{     count--;
					printf("\n Data deleted successfully by deletetolast \n Press any key to procced");
					getch();
					break;
				}
                                }
			       if(deleteToNthPos(position))
				{       count--;
					printf("\n Data deleted successfully \n Press any key to procced");
					getch();
					break;
				}
                          }
                case 9:
                        {     int position;
                                 if(count==0)
                               {
                                printf("\nNothing to delete \n Press any key to procced");
                                head=NULL;
                                getch();
                                break;
                               }
                                printf("Enter the position at which you want to insert");
                                scanf("%d",&position);
                                if(position>count+1 || position<=0 )
                                {
                                 printf("\nPosition is out of range \nPress any key to procced");
                                 getch();
                                 break;
                                }
                                  if(position==1 )
                                {
                                 printf("\nNothing to delete \nPress any key to procced");
                                 getch();
                                 break;
                                }
			       if(deleteToNthPos(position-1))
				{       count--;
					printf("\n Data deleted before nth position successfully \n Press any key to procced");
					getch();
					break;
				}
                          }
                 case 10:
                        {     int position;
                                 if(count==0)
                               {
                                printf("\nNothing to delete \n Press any key to procced");
                                head=NULL;
                                getch();
                                break;
                               }
                                printf("Enter the position at which you want to insert");
                                scanf("%d",&position);
                                if(position>count+1 || position<=0 )
                                {
                                 printf("\nPosition is out of range \nPress any key to procced");
                                 getch();
                                 break;
                                }
                                  if(position==count )
                                {
                                 printf("\nNothing to delete \nPress any key to procced");
                                 getch();
                                 break;
                                }
			       if(deleteToNthPos(position+1))
				{       count--;
					printf("\n Data deleted after nth position successfully \n Press any key to procced");
					getch();
					break;
				}
                          }
		case 11:
			{
				printData();
				printf("\nPress any key to procced");
                                printf("\nNumber of nodes is %d",count);
				getch();
				break;
			}
		default:
			{
				exit(0);
			}
		}

	}  */

 }