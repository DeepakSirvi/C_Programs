 #define MAX_SIZE 10
int stack[MAX_SIZE];
int top=-1;
int push(int data)
{
 return stack[++top]=data;
}

int pop()
{
return stack[top--];
}
int isEmpty()
{
return top==-1?1:0;
}
int isFull()
{
return top==MAX_SIZE-1?1:0;
}
int peek()
{
return stack[top];
}

void main()
{
 int data;
 while(1)
 {
  int choice;
  clrscr();
  printf("\n1: To push");
  printf("\n2: To pop");
  printf("\n3: To peek");
  printf("\n4: To check empty");
  printf("\n5: To check full");
  printf("\n6: Exit");
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
    push(data);
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
    printf("%d",pop());
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
    // printf("%d",stack[0]);
     // printf("%d",stack[1]);
      // printf("%d",stack[2]);
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
   default:
   {
   exit(0);
   }
  }
 }

}