//Addition,subraction,multipication,division and reminder of two number


void main()
{
   int a,b,c;
   clrscr();
   printf("Enter the numbers");
   scanf("%d%d",&a,&b);

      c=a+b;
       printf("Addition of %d and %d is %d\n",a,b,c);

       c=a-b;
       printf("Subtraction of %d and %d is %d\n",a,b,c);


      c=a*b;
       printf("Multiplication of %d and %d is %d\n",a,b,c);

       c=a/b;
        printf("Divisin of %d and %d is %d\n",a,b,c);

        c=a%b;
        printf("Reminader of %d divisible by %d is %d",a,b,c);

getch();
}