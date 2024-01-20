 // Reverse the digit of given number

 int reverse(int n)
 {
   int z=0;
   while(n!=0)
   {
    z=z*10+n%10;
    n=n/10;
   }
   return z;
 }


 void main()
 {
   int num;
   clrscr();
   printf("Enter the number");
   scanf("%d",&num);

   printf("Reverse ==> %d",reverse(num));
   getch();
 }



/*
void main()
{ int num,y,z=0;
clrscr();
printf("Enter the number to reverse : ");
scanf("%d",&num);
for( ;num!=0; )
{y=num%10;
z=z*10+y;
num=num/10;
}
printf("reverse number is %d",z);
getch();
}*/
