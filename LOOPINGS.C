void main()
{
clrscr();
// 1
/*
{
 signed char var;
 for(var=0;var<=127;var++)
 printf("%c %d\n",var,var);
} */
// 2

{
int x=123;
int i={printf("c" "++")};
for(x=0;x<=i;x++)
{
printf("%x",x);
}
}
// 3
    /*
{
int i;
for(i=10;i<=12;i++)
{
while(i)
{
do
{
printf("%d",i);
if(i>>1)
continue;
}while(0);
break;
}
}
} */
// 4
/*
{
int i=2,j=2;
while(i+1?--i:j++)
printf("%d",i);
} */
// 5 c
// 6 d
// 7
/*
{
    int k=0;
    for(k<3;k++)
    printf("hello");
} */
// 8
/*
{
 double k=0;
 for(k=0.0;k<3.0;k++)
 printf("hello");
} */
// 9
/*
{
char *str="";
do
{
printf("hello");
}while(str);

} */
// 10
/*
{
int i=0;
while(i<10)
{
 i++;
 printf("hi\n");

}while(i<8)
i++;
printf("hello");
  }*/

// 11
/*
{
int i=0,j=0;
while(i<5,j<3)
{
i++;
j++;
}
 printf("%d %d\n",i,j);
} */
// 12 c
// 13
/*
{
 int k=0;
 for(k)
 printf("hello");
} */
// 14
/*
{
 int i;
 for(i=0;i<5;i++)
 {
  int i=10;
  printf("%d",i);
  i++;
 }
} */
// 15
/*
{
 int k;
 {
 int k;
 for(k=0;k<10;k++);
 }
 }*/
 // 16
 /*
 {
  int a,b;
  a=b=1;
  while(a=b++<=12);
  printf("%d %d\n",a,b);
 } */

 //17
 /*
 {
  int i=0,j=0;
  for(j=0;j<5;j++)
  {
  i=i++;
  }
  printf("%d %d",i,j);
 } */
 // 18
        /*
 {
 static char k;
 while(k<=10)
 k>0?k++:k--;
 if(printf("%d\n",k))
 printf("1");
 }        */
 // 19
 /*
 {
  int x=1;
  while(++x<5)
  {
  ++x;
  printf("%d",++x);
  goto out;

  }
  out:
  printf("end");
 } */
 // 20 Error :- As no condition mention
 // 21
 /*
  {
   int x=1;
  while(++x<5)
  {
  ++x;
  printf("%d",++x);
  goto out;

  }
  out:
  printf("end");
 }
 void fun()
 {
 out:
 printf("fun");
 } */
 // 22 same as 19
 // 23 same as 20\
 // 24
 /*
 {
      for(;;)
      {
       static int x=1;
       int y=1;
       x++;
       y++;
       printf("%d %d\n",x,y);
       if(x>y)
       break;
      }

 } */

// 25
/*
{
unsigned int num=65530;
while(num++!=0);
printf("%d\n",num);
} */
// 26
/*
{
 char ch[]="1";
 while(1)
 {
 if(printf("%d",printf("%s",ch)))
 break;
 else
 continue;
 }
} */
// 27
/*
{
 int i;
 for(i=0;i<5;i--)
 {
 do
 {
 int j=i/2;
 printf("%d ",j);
 }while(j++<i--);
 }
} */
// 28
/*
{
int i;
for(i=0;-i<3;i--)
printf("%d",i);
}*/
// 29
/*
{
int i=3;
for(;i;printf("%d",i--));
 }
  */
  // 30
  /*
 {
  int i,j;
  {
   for((i=2,j=5);(i<5,j<10);i++,j++);
   printf("%d %d",i,j);
  }
 }  */
 // 31
 /*
 {
  printf("s1");
  for(exit(10);1;printf("s5"))
  {
   printf("s2");
   break;
   printf("s4");
  }
  printf("s5");
 } */
 // 32
 /*
 {
  printf("s1");
  while(1)
  {
   printf("s2");
   exit(1);
   printf("s3");
   break;
   printf("s4");
  }
  printf("s5");
  }*/
  // 33
  /*
  {
   int i=0;
   for(;i=0,i<5;)
   {
   i++;
   printf("%d",i);
   }
  } */
  // 34
 /*
  {
  char c=48;
  int i,mask=01;
  for(i=1;i<=5;i++)  {
 printf("%c ",c|mask);
  mask=mask<<1;

  }
  }     */
  // 35
  /*
  {
  int i=0;
  do
  while(i++<2);
  while(i++<=3);
  printf("%d",i);
  } */
  // 36
  /*
  {
   int i=i;
   i=1;
   while(i++);
   printf("%d",i);
  } */
  // 37
  /*
  {
    {
   int i=i;
   i=1;
   while(i++>32767);
   printf("%d",i);
  }
  } */
  // 38
  /*
  {
  int a,b;
  a=b=10;
  while(a)
  {
  a=++b<15;
  printf("%d %d\n",a,b);
  }
  }              */
// 39
/*
{
 int i;
 i=1;
 do
 while(i++<=1);
 while(i++<=3);
 printf("%d",i);
} */
// 40
/*
{
int m=3;
do
{
printf("%d\n",m);
m=0;
}
while(m>0);
} */
// 41
/*
{
int j;
for(j=0;j++<=4;printf("%d\n",j));
} */
// 42
/*
{
char i=250;
for(i<0;i++;i=0,printf("%d",i));
} */
// 43
/*
{
char j;
for(j=1;100;j++)
printf("%d",j);
}
*/
// 44
/*
{
 int i;
 printf("hello");
 for(i=1;i<=10;i++)
 main();

} */
// 45
/*
{
 int i,j=0;
 for(i=0;i<10;);
 {
  j+=i;
  i+=2;
  printf("%d",j);
  getch();
 }
} */
// 46
/*
{
 int a;
 a=1;
 while(a<=1)
 if(a%2)
 printf("%d",a++);
 else
 printf("%d",++a);
 printf("%d",a+10);
} */
// 47
/*
{
int a;
a=10;
do
while(a++<=10);
while(a++<=11);
printf("%d",a);
} */
// 48
/*
{
 int a,b;
 for(a=b=10;a;printf("%d %d\n",a,b))
 a=b++<=12;
 printf("%d %d",a,b+10);
} */
// 49
/*
{
int i;
for(i=1;i++<=1;i++)
i++;
printf("%d",i);
} */
// 50
/*
{
int i;
for(i=1;i++<1;i++)
for(i++;i++<=6;i++)
i++;
printf("%d",i);
} */
// 51
/*
{
    int a;
    a=1;
    while(a<=10)
    printf("%d",a);
    if(a>3)
    break;
    a++;
    printf("%d",a+10);
} */
// 52
/*
{
 int a=1;
 while(a<=3)
 {
  printf("%d",a);
  if(a>3&&a<8)
  continue;
  a++;
 }
 printf("%d",a+10);
} */
// 53
/*
{
 int x=10,y=20;
 while(x++<=12||y++<=22)
 printf("%d %d\n",x,y);
 printf("%d %d",x+10,y+10);
} */
// 54
/*
{
int i;
for(;scanf("%d",&i);printf("%d",i))
break;
} */
// 55
/*
{
int i;
for(i=0;i=10;i++)
printf("%d",i);
} */
// 56
/*
{  int i=0;
char ch='A';
do
putchar(ch);
while(i++<5||++ch<='F');

} */

// 57
/*
{
while("hai");
printf("hello");
} */
// 58
/*
{
for(;;)
printf("hello");

} */
// 59
/*
{
 int i=0;
 for(;i;)
 printf("Loop\n");
 printf("End");
} */
// 60
/*
{
 for(;0;)
 printf("Loop\n");
 printf("End");
} */
// 61
/*
{
 int i=0;
 while(i)
 printf("Loop\n");
 printf("End");
} */
// 62
/*
{

 while(0)
 printf("Loop\n");
 printf("End");
} */
// 64
/*
{
int i=0;
 do
 printf("Loop\n");
 while(i);
 printf("End");
} */
// 64
/*
{
 do
 printf("Loop\n");
 while(0);
 printf("End");
} */

getch();

}