void main()
{
  int i=1,f=1,j;
  clrscr();
  for( ;i<=10;i++)
  {
     for(j=1;j<=10;j++)
     {
     f=i*j;
     if(f<10)
     printf("0%d ",f);
     else
     printf("%d ",f);
     }
     printf("\n");
  }
getch();
}




/*void main()
{
int f,s,i,x;
clrscr();
printf("Enter the numbers");
scanf("%d %d",&f,&s);
while(f<=s)
{
for(i=1;i<=10;i++)
{
 x=f*i;

 if(x<10)
 printf("0%d ",x);
 else
 printf("%d ",x);
}
printf("\n");
f++;
}
getch();
}  */