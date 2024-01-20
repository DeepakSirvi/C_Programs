void abc()
{
 #define abc() if(x)
 #define x 0
}
void main()
{
int a = 5;
clrscr();
abc()
a=10;
printf("%d",a);
getch();
}