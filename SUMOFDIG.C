// Sum only even digit of given number

void main()
{
 int num,z=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);

   while(num!=0)
   {
     if(num%2==0)
     {
      z=z+num%10;
     }
     num=num/10;

   }
   if(z<0)
   printf("Sum of digits ==> %d",z*-1);
   else
    printf("Sum of digits ==> %d",z);


   getch();
}
   /*


// Sum the digit of given number

void main()
{
 int num,z=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);

   while(num!=0)
   {
     z=z+num%10;
     num=num/10;
   }
   if(z<0)
   printf("Sum of digits ==> %d",z*-1);
   else
    printf("Sum of digits ==> %d",z);


   getch();
}

 */
/*
void main()
{ int x,num,y,z=0,i;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
num=x;
for( ;num>0; )
{y=num%10;
z=z+y;
num=num/10;
}
printf("sum of digit of given number is %d",z);
getch();
} */