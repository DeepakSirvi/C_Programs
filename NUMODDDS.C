int isEven(int n)
{
 if(n%2==0)
 return n;
 else
 return 0;
}



void main()
{int n,r,s=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
 r=n%10;
 n=n/10;
 if(!isEven(r))
 s=s+r;
}
printf("%d",s);

getch();
}