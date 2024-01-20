// Accept a number and print the number of digit
// Condition :- Number may be negative and zero

int count(int n)
{
 int c=0;

 if(n<0)
 n=n*-1;

 while(n!=0)
 {
   n=n/10;
   c++;
 }
 return c;
}

void main()
{
 int num;
 clrscr();
 printf("Enter the number : ");
 scanf("%d",&num);

  if(num==0)
 printf("Digit count is 1");
  else
 printf("Digit count is %d",count(num));

getch();
}



/*int digitCount(int n)
{
 int c=0;
 if(n==0)
 {
 c=1;
 return c;
 }
 while(n!=0)
 {
   n=n/10;
   c++;
   }
   return c;
   }


 void main()
 { int n;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);
 printf("%d",digitCount(n));
 getch();
 }*/