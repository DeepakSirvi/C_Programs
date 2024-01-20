

int pow(int i)
{
  int j,n=1;
   for(j=1;j<=i;j++)
   {
    n=n*10;
   }
 return n;
}

void main()
{
clrscr();
{ // sum 1 to all digit of num and printf
int num,i=0,sum=0,r;
printf("Enter the number");
scanf("%d",&num);
 for(;num!=0;num/=10,i++)
 {
 r=num%10;
 if(r==9)
 r=0;
 else
 r++;
  sum=sum+(r)*(pow(i));
 // printf("%d\n",sum);
 }
 printf("%d",sum);

}
getch();
}