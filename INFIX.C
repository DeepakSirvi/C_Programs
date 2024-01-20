#include<stdio.h>
#define MAX_SIZE 50
char stack[MAX_SIZE]={'\0'};
int top=-1;
char arr[MAX_SIZE]={'\0'};
int arrsize=-1;

int isFull()
{
 if(top==MAX_SIZE-1)
 return 1;
 else
 return 0;
}

int isEmpty()
{
 if(top==-1)
 return 1;
 else
 return 0;
}

int push(char val)
{
 if(!isFull())
 {
 stack[++top]=val;
 return 1;
 }
 return 0;
}

char pop()
{
  char val=NULL;
 if(!isEmpty())
 {
   val=stack[top--];
 }
 return val;
}
char peek()
{
 char val=NULL;
 if(!isEmpty())
 {
  val=stack[top];
 }
 return val;
}
int operator(char opt)
  {
  if(opt=='+' || opt=='-' || opt=='*' || opt=='/')
    return 1;
    else
    return 0;
  }

int  operand(char oper)
{
 if((oper>=97 && oper<=122)||(oper>=65 && oper<=90))
 return 1;
 else
 return 0;
}

int parRight(char par)
{
 if(par=='(')
 return 1;
 else
 return 0;
}

int parLeft(char par)
{
 if(par==')')
 return 1;
 else
 return 0;
}

int precedence(char oper)
{
  switch(oper)
  {
    case '/':
    case '*':
    return 3;
    case '+':
    case '-':
    return 2;
    case '(':
    return 1;
  }
}

void show()
{
 int i;
 for(i=0;i<=arrsize;i++)
 {
  printf("%c",arr[i]);
 }
}
void stackShow()
{
 int i;
 for(i=0;i<=top;i++)
 {
  printf("%c",stack[i]);
 }
}
char* infixToPostfix(char exp[])
{
  int i=0;
  if(!parRight(exp[i]))
 {
   push('(');
 }
 for(;exp[i]!=NULL;i++)
 {
 //   printf("%c",exp[i]);
   if(operator(exp[i]))
   {
      if(precedence(exp[i])<precedence(peek()))
      {
       arr[++arrsize]=pop();
       push(exp[i]);
      }
      else
      {
        push(exp[i]);
      }
   }
   else if(operand(exp[i]))
   {
     arr[++arrsize]=exp[i];
   }
   else if(parRight(exp[i]))
   {
      push(exp[i]);
   }
     else if(parLeft(exp[i]))
   {
     while(peek()!='(')
     {
       arr[++arrsize]=pop();
     }
     pop();
   }
 }

while(top!=-1)
{
 if(peek()!='(')
 arr[++arrsize]=pop();
 else
 pop();
}
return arr;
}

int postfixEva(char postfix[])
{
 int i,value,a,b,c,x;
 for(i=0;i<strlen(postfix);i++)
 {
   if(operand(postfix[i]))
   {
      printf("\nEnter the value of %c : ",postfix[i]);
      scanf("%d",&x);
      push(x);
   }
   else if(operator(postfix[i]))
   {
     a=pop();
     b=pop();
     if(postfix[i]=='+')
     push(b+a);
     else if(postfix[i]=='-')
     push(b-a);
     else if(postfix[i]=='*')
     push(b*a);
     else if(postfix[i]=='/')
     push(b/a);
   }
 }
 return stack[top--];
}
char * revInfix(char infix[])
{
int i=0,j=strlen(infix)-1;
for(i=0;i<=j;i++,j--)
{
  if(infix[i]=='(')
  infix[i]=')';
  else if(infix[i]==')' )
  infix[i]='(';


  if(infix[j]=='(')
  infix[j]=')';
  else if(infix[j]==')' )
  infix[j]='(';
  infix[i]=infix[i]+infix[j]-(infix[j]=infix[i]);
}
return infix;
}

void main()
{
char exp[MAX_SIZE]={'\0'};
char * postfix;
 int i=0;
 clrscr();
 printf("Enter expression : ");
 gets(exp);
//postfix= infixToPostfix(exp);
//printf("%s\n",postfix);
//printf("%d\n",postfixEva(postfix));
printf("%s\n",revInfix(infixToPostfix(revInfix(exp))));
/* if(!parRight(exp[i]))
 {
   push('(');
 }
 for(;exp[i]!=NULL;i++)
 {
 //   printf("%c",exp[i]);
   if(operatr(exp[i]))
   {
      if(precedence(exp[i])<=precedence(peek()))
      {
       arr[++arrsize]=pop();
       push(exp[i]);
      }
      else
      {
        push(exp[i]);
      }
   }
   else if(operand(exp[i]))
   {
     arr[++arrsize]=exp[i];
   }
   else if(parRight(exp[i]))
   {
      push(exp[i]);
   }
     else if(parLeft(exp[i]))
   {
     while(peek()!='(')
     {
       arr[++arrsize]=pop();
     }
     pop();
   }
 }

while(top!=-1)
{
 if(peek()!='(')
 arr[++arrsize]=pop();
 else
 pop();
} */

//show();
 getch();
}
