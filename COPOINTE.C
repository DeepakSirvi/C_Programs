/*
void fun()
{
printf("hello fun");
}
void main()
{
void (*p)();
clrscr();
p=fun;
(*p)();
getch();
} */
char *fun(int *a,int b)
{
printf("hello fun");
}
void main()
{
 char *(*p)(int *,int);
 int i;
 clrscr();
 p=fun;
 (*p)(&i,10);
 getch();
}