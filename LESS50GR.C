// Accept a number from user and print the number is less then,greater then and equal to 50

void main()
{
  int n;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);

  if(n>50)
  printf("%d is greater then 50",n);
  if(n<50)
  printf("%d is less then 50",n);
  if(n==50)
  printf("%d is equal to 50",n);
getch();
}