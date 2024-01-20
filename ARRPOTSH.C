
// 1
/*
void main()
{
 int arr[];
 arr[1]=10;
 printf("%d",arr[0]);
 getch();
} */

// 2
/*
void main()
{
 int arr[2]={10,20,30,40};
 printf("%d",*(arr+2));
 getch();
} */
// 3
/*
void main()
{
 int arr[2]={10,20};
 arr[2]=30;
 arr[3]=40;
 printf("%d",*(arr+3));
 getch();
} */
// 4
/*
void main()
{
 int arr[2]={10,20};
 *arr=30;
 *(arr+1)=40;
 printf("%d %d",arr[0],1[arr]);
 getch();
} */
// 5
/*
void main()
{
 int a=1;
 void xyz(int,int);
 xyz(++a,a++);
 xyz(a++,++a);
 printf("%d ",a);
 }
 getch();
 }
 void xyz(int x,int y)
 {
  printf(" %d %d ",x,y);
 }*/

 // 7
 /*
void display(int a)
{
printf("\n%d",a);
if(--a)
display(a);
printf("\n%d",a);
}
void main()
{
clrscr();
display(4);
getch();
}  */
// 8
/*
void xyz(int x)
{
printf(" %d ",x);
if(x)
 xyz(x-1);
 printf(" %d ",x);
}
void abc(int a)
{
 printf(" %d ",a);
 xyz(a);
 if(a)
 abc(a-1);
 printf(" %d ",a);
 }
 void main()
 {clrscr();
  abc(2);
getch();
 }*/
// 9
/*

void main()
{
static int a=1;
printf("\n%d",++a);
if(a<=3)
main();
printf("\n%d",a);
getch();
} */
// 10
/*
void main()
{
int a=511,b;
char *ptr;
clrscr();
ptr=&a;
b=*ptr;
printf("%d %d",a,b);
getch();
} */
// 11
/*
void main()
{
 int a=10;
 int *p=&a;
 int **pp=&p;
 clrscr();
 ++*p;
 ++**pp;
 a*=a-2;
 printf("%d",a);
getch();
} */
// 12
/*
void change(int p1,int *p2)
{
 ++p1;
 ++*p2;
}
void main()
{
 int x=10,y=20;
 change(x,&y);
 printf("%d %d",x,y);
getch();
}  */
// 13
/*
void main()
{
int a[]={7,18,29};
int* p;
clrscr();
p=a;
++p;
printf("%d %d %d",p[-1],p[0],p[1]);

getch();
} */
// 14
/*
void xyz(int *ptr)
{
++*ptr;
if(*ptr<=10)
xyz(++ptr);
++*ptr;
}
void main()
{
 int arr[]={2,4,8,16};
 int i;
 clrscr();
 xyz(arr+1);
 for(i=0;i<5;i++)
 {
 printf("%d ",arr[i]);
 }
 getch();
} */
// 15
/*
void main()
{
 int arr[4][8]={10,20,30};
 clrscr();
 printf("%d",sizeof(arr));
 printf("%d",sizeof(arr[1]));
 printf("%d",sizeof(arr[2][0]));

 getch();
} */
// 16
/*
void main()
{
 int arr[4][8]={10,20,30};
 clrscr();
 printf("%d",&arr[3][4]-&arr[1][2]);
getch();
} */
// 17
/*
void main()
{
int arr[3][]={{7,8,9},{3,13},{10,20,30}};
 clrscr();
printf("%d",arr[1][1]);

getch();
} */
// 18
/*
void main()
{
int arr[][4]={{7,8,9},{3,13},{10,20,30}};
 clrscr();
printf("%d",arr[1][1]);

getch();
} */
// 19
/*
void main()
{
int arr[5]={10,20};
clrscr();
printf("%d %d",1[arr],arr[0]);
getch();
} */
// 21
/*
void main()
{
int arr1[5]={10,20};
int arr2[5];
clrscr();
printf("%d %d",arr1[3],arr2[3]);

getch();
} */
// 22
/*
void main()
{
 int a[2];
 int i;
 clrscr();
 for(i=0;i<10;i++)
 a[i]=i*i;
 printf("%d %d",a[3],a[4]);
getch();
}                          */

// 24
 /*
void main()
{
 int a[5]={6,16,26};
 clrscr();
 ++*a;
 ++*(a+1);
 ++a[1];
 printf("%d %d",a[0],a[1]);
getch();
}
*/
// 25
/*
void main()
{
 int a[5]={10,20,30,40,50};
 int *ptr;
 clrscr();
 ptr=a+1;
 printf("%d %d %d",++*ptr,*ptr++,*++ptr);

getch();
} */
// 26
/*
void main(){
char str[5]={'a','b','c','d'};
clrscr();
printf("%s",str);
getch();
} */
// 27
/*
void main()
{
 char str[]="abcdefghxyz";
 clrscr();
 printf("\n%s",str);
  printf("\n%s",str+4);
  printf("\n%s",str+8);

getch();
} */
// 28
/*
void main()
{
 char str[]="dollop info";
 clrscr();
 str[1]++;
 str[2]=100;
 puts(str);
getch();
}          */
 // 29
 /*
 void main()
 {
 char str[]="abcdef";
 clrscr();
 str[3]=0;
 puts(str);
 getch();
 }  */
 // 30
 /*
 void display(char *str)
 {
  puts(str);
  if(*str)
  display(str+1);
  puts(str);
 }
 void main()
 {
 char st[]="abc";
 display(st);
 getch();
 }*/
 // 31
 /*
 void main()
 {
 char str1[]="hell";
 char str2[]="abc";
 str1=str2;
 puts(str1);
 getch();
 } */
 // 32
 /*
 void main()
 {
 char str[]="abcdef";
 ++str;
 ++*str;
 puts(str);
 getch();
 } */
 // 33
 /*
 void main()
 {
  char str[]="java";
  printf("%d %d",sizeof(str),strlen(str));
 getch();
 } */
 // 34
 /*
 void main()
 {
  char str1[20]="hell dollop info";
  char str2[20]="hell dollopinfo";
  strcpy(str1+6,str2+6);
  puts(str1);
  puts(str2);

 getch();
 } */
 // 35
 /*
 char *change(char *ptr)
 {
 ++*ptr;
 ++ptr;
 ptr+=2;
 *ptr+=2;
 return ptr-2;
 }
 void main()
 {
 char name[]="hello rahul";
 clrscr();
 puts(change(name));
 puts(name);
 getch();
 }          */
 // 36
 /*
 void main()
 {
  char str[40]="Welcome";
  char *p;
  clrscr();
  p=str+7;
  strcpy(p,"java");
  puts(p);
  puts(str);
  getch();
 } */
// 37
/*
void main()
{
char s1[40]="abcdef";
char *s2="Javapr JP";
char *s3="Javapr";
clrscr();
s3=s2+2;
s2=s1+2;
++*s2;
++*s3;
puts(s1);
puts(s2);
puts(s3);
getch();
} */

// 38
/*
void main()
{
 char str[40]="abc789101112";
 strrev(str+3);
 puts(str);
 getch();
} */
// 39
/*
void main()
{
char s1[40]="abcdf";
char s2[]="xyz";
strcat(s1+2,s2+1);
puts(s1);
puts(s2);
getch();
} */
// 40
/*
void dump(char *p1,char *p2)
{
while(*p1++=*p2++);
}
void main()
{
 char str1[]="hello Javapr JP";
 char str2[]="Javapr";
 clrscr();
 dump(str1,str2);
 puts(str1);
 puts(str2);
 getch();
}*/
// 41
/*
void main()
{
char s[4][40]={"abc","123","xyz"};
char *p[4]={"pascal","cobol"};
clrscr();
printf("\n%d",sizeof(s));
printf("\n%d",sizeof(p));
getch();
 }*/
// 42
/*
void main()
{
char str[2]="hello";
puts(str);
getch();
} */
// 43
/*
void main()
{
char str[2];
clrscr();
strcpy(str,"hello");
puts(str);
getch();
} */
// 44 similar to 31
// 45 similar to 32
// 46 similar to 33
// 47  similar to 34
// 48 similar to 35
// 49 similar to 36
// 50 similar to 37
// 51 similar to 38
// 52 similar to 39
// 54
/*
void main()
{
 char s[4][40]={"cobol","pascal","java","oracle"};
 char *p[4],**pp;
 int i;
 p[0]=s[0];
 p[1]=s[1];
 p[2]=s[2];
 p[3]=s[3];
 pp=p;
 for(i=4;i>=1;i--)
 {
  *pp+=i;
  **pp=i;
  ++pp;
 }
 --pp;
 puts(*pp);
 for(i=0;i<4;i++)
 puts(p[i]);
 for(i=0;i<4;i++)
 puts(s[i]);
 getch();
} */
// 55
/*
void main()
{
char s1[4][40]={"abc","123","xyz"};
char *p[4]={"pascal","cobol"};
clrscr();
printf("%d",sizeof(p));
getch();
}  */
// 56 similar to 42
// 57 similar to 43
// 58
/*
 void main()
 {
  char str[40]="nithiya";
  char *p;
  clrscr();
  p=str+7;
  strcpy(p,"satya");
  puts(p);
  puts(str);
  getch();
 }              */
 // 59
 // L value required s1=s2
 // 60
      /*
 void prints(char *s)
 {
 puts(s);
 if(*s)
 prints(s+1);
 puts(s);
 }
 void main()
 {
 char s[]="colors";
 clrscr();
 prints(s);
 getch();
 }      */
 // 61
 /*
 void main()
 {
 char a[]="dearsatya";
 a[4]=0;
 printf("%s\n",a);
 getch();
 } */
 // 62
 /*
 void main()
 {
  char a[]="c.satya";
  a[0]++;
  a[1]=114;
  puts(a);
  getch();
 } */
 //63
 /*
 void main()
 {
 int a[5]={9,88,54,23,78};
 int *p;
 clrscr();
 p=a+1;
 printf("%d %d %d",++*p,*p++,*++p);
 getch();
 } */
 // 64 similar as 24
 // 65 Error :- L value required
 // 66 garbage as condition in i<1
 // 67 column size required
 // 68 similar as 16
 // 69 5 23 113
 // 70
 /*
 void incr(int a,int *b)
 {
 ++a;
 ++*b;
 }
 void main()
 {
  int x=5,y=50;
  incr(x,&y);
  printf(" %d %d",x,y);
  getch();
 } */
 // 71
 // 72 similar to 10
 // 73 similar to 5
 // 74 undefined symbol
 // 75 (5,40);
 // 76
 /*
 void main()
 {
  int a[2]={23,56};
  clrscr();
  a[2]=30;
  a[3]=99;
  printf(" %d ",*(a+1));
  getch();
 } */
 // 77
 /*
 void main()
 {
 int a[2]={23,56,87,56};
 printf("\n%d",*(a=2));
 getch();
 } */
 // 78
 /*
 void main()
 {
 int a[-1];
 a[-1]=23;
 printf("%d",a[-1]);
 } */