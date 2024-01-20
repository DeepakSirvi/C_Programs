void main()
{
  int a,b,c,d;
  clrscr();
  printf("Enter the value of (a+ib) a and b repectively");
  scanf("%d%d",&a,&b);
  printf("Enter the value of (c+id) c and d repectively");
  scanf("%d%d",&c,&d);
  if(b+d<0)
  printf(" Addition ==> %d%di\n",a+c,b+d);
  else
  printf("Addition ==> %d+%di\n",a+c,b+d);
  if(b-d<0)
  printf("sub ==> %d%di\n",a-c,b-d);
  else
  printf(" sub ==> %d-%di\n",a-c,b-d);
  if((b*c-b*d)<0)
  printf("multipication ==> %d%di",(a*c)-(b*d),(a*d)-(b*c));
  else
  printf("multipication ==> %d+%di",(a*c)-(b*d),(a*d)-(b*c));

  if((b*c-a*d)<0)
  printf("Division ==> %d%di",(a*c-b*d)/(c*c+d*d),(b*c-a*d)/c*c+d*d);
  else
   printf("Division ==> %d+%di",(a*c-b*d)/(c*c+d*d),(b*c-a*d)/c*c+d*d);


 getch();
}