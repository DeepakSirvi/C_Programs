//print a diamond

void main()
{
  int i=1,j=1,n,x;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  if(n%2==0)
  n++;
  for(x=1;x<=n;x++)
  {
   printf("%*.*s\n",n/2+j,i,"**********************************");
   x<=n/2?((i+=2),j++):((i-=2),j--);
  }
getch();
}




/*void main()
{
  int i=1,j=1,n=6,x;
  clrscr();
  n%2==0?n++:n;
  for(x=1;x<=n;x++)
  {
   // x<n/2?((i+=2),j++):((i-=2),j--);
    printf("\n%*.*s",n/2+j,i,"********************************");
    x<=n/2?((i+=2),j++):((i-=2),j--);
       }
        getch();
        }
        */