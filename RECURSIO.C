// 1
/*
void display(int a)
{
printf("%d\n",a);
if(--a)
display(a);
printf("%d\n",a);
}
void main()
{
 display(3);
getch();
} */
// 2
/*
void xyz(int x)
{
 printf("%d\n",x);
 if(x)
 xyz(x-1);
 printf("%d\n",x);
}
void abc(int a)
{
 printf("%d\n",a);
 xyz(a);
 if(a)
 abc(a-1);
 printf("%d\n",a);
}
void main()
{
clrscr();
abc(2);
getch();
}        */
// 3
/*
void main()
{
static int a=1;
clrscr();
printf("%d\n",++a);
if(a<=3)
main();
printf("%d\n",a);
getch();
} */
// 4
// 5
/*
int fact(int n)
{
 if(n==1)
 return 1;
 else
 return n*fact(n-1);
}
void main()
{
 int f;
 f=fact(5);
 printf("fact is %d",f);
 getch();
}        */
// 6
/*
int power(int b,int p)
{
 if(p>1)
 return b*power(b,p-1);
 else
 return b;
 }
 void main()
 {
  int r;
  r=power(2,3);
  printf("%d",r);
  getch();
 }*/
 // 7
 /*
 void xyz()
 {
  static int s=5;
  int a;
  a=s++;
  printf("%d %d\n",a,s);
  if(a<=7)
  xyz();
  printf("%d %d\n",a,s);
 }
 void main()
 {
 clrscr();
  xyz();
  xyz();
  getch();
 }        */
 //  8
 /*
 int g;
 void abc()
 {
 static int s;
 auto int a;
 ++g;
 a=++s;
 printf("%d %d %d\n",a,s,g);
 if(a<=2)
 abc();
 printf("%d %d %d\n",a,s,g);
 }
 void main()
 {
  void xyz();
  clrscr();
  ++g;
  abc();
  xyz();


 getch();
 }
 void xyz()
 {
 static int s=10;
 int a;
 a=s++;
 ++g;
 printf("%d %d %d\n",a,s,g);
 if(a<=12)
 xyz();
 printf("%d %d %d\n",a,s,g);
 } */

 // 9
   /*
 extern int g=10;
 void abc()
 {
  static int s=5;
  int a;
  ++g;
  a=++s;
  printf("| %d %d %d |",a,s,g);
  if(a<=8)
  abc();
  printf("| %d %d %d |",a,s,g);
 }
 void main()
 {
 void xyz();
 clrscr();
 ++g;
 xyz();
 getch();
 }
 void xyz()
 { static int s;
 auto int a;
 a=s++;
 ++g;
 printf("| %d %d %d |",a,s,g);
 abc();
 if(a<=2)
 xyz();
 printf("| %d %d %d |",a,s,g);
 }
 */
  // 10
 /*
 int reverse(int i)
 {
  if(i>5)
  exit(0);
  printf("%d\n",i);
  return reverse(i++);
 }
 int main()
 {
 reverse(1);
 getch();
 } */
 // 11
 /*
 void reverse(int i);
 int main()
 {  clrscr();
 reverse(1);
 getch();
 }
 void reverse(int i)
 {
 if(i>5)
 return;
 printf("%d\n",i);
 return reverse((i++,i));
 } */
 // 12
 /*

 void display(int a)
 {
  static int b=a;
  printf("%d %d\n",a,b);
  if(--a)
  display(a);
  printf("%d %d\n",a,b);

 }
  void main()
  {
   clrscr();
   display(2);
   getch();
  }         */
  // 13
  /*
  void xyz(int x)
  {
   printf("%d\n",x);
   if(x)
   xyz(x-1);
   printf("%d\n",x);
  }
  void abc(int a)
  {
  printf("%d\n",a);
  xyz(a);
  if(a)
  abc(a-1);
  printf("%d\n",a);

  }
  void main()
  {
  clrscr();
  abc(1);
  getch();
  }*/