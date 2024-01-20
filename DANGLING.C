int *fun()
{
int b=30;
return &b;
}
void farzi()
{
int i=-10;
}
void main()
{
 int a=10;
 int *p=&a;
 clrscr();
 p=fun();
// farzi();
 clrscr();
 printf("%d",a);
 printf("%d",*p);
 getch();
}