//Find a factorial of n
//If n is negative then print an valid input

void main()
{
   int i,n,f=1;
   clrscr();
   printf("Enter the number");
   scanf("%d",&n);
   if(n<1)
   {
    printf("Invalid input");
    return 0;
   }

   for(i=1;i<=n;i++)
   f=f*i;

     printf("Factorial of %d is %d",n,f);

getch();
}


/*
void main()
{ int x,num,i;
clrscr();
printf("Enter the number : ");
scanf("%d",&x);
num=1;
for(i=1;i<=x;i++)
{ num=num*i;
}
printf("Factorial of %d is %d",x,num);
getch();
} */