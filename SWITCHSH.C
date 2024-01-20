void main()
{
clrscr();
// 1
/*
{
 int a=1,b=1;
 LVL:
 switch(3)
 {
  case a:
  printf("1");
  case b:
  printf("2");
  default:
  goto LVL;
 }
}*/

// 2
/*
{
 double ch;
 scanf("%lf",&ch);
  switch(ch)
 {
  case 1:
  printf("1");
  break;
  case 2:
  printf("2");
  break;
 }
} */
// 3
/*
{
char *ch;
printf("press(1 to 3)");
scanf("%s",&ch);
switch(ch)
{
 case 1:
  printf("1");
  break;
  case 2:
  printf("2");
  break;

}
} */
// 4
/*
{
int ch='1';
switch(ch)
{
 case 1:
 printf("1");
 default:
 printf("2");
}
} */
// 5
/*
{
 int ch;
 printf("Enter the number");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  printf("1");
  break;
  printf("hi");
  default:
  printf("2");
  break;
 }
}         */
// 6
/*
{
 int ch=1;
 switch(ch,ch+1)
 {
  case 1:
  printf("1");
  break;
  case 2:
  printf("2");
  break;
  }
} */
// 7
/*
{
 int a=1,b=1;
 switch(a)
 {
  case a*b:
  printf("yes");
  case a-b:
  printf("no");
  break;
 }
} */
// 8
/*
{
 int x=97;
 switch(x)
 {
  case 'a':
  printf("yes");
  break;
  case 97:
  printf("no");
  break;
 }
} */
// 9
/*
{
 float f=1;
 switch(f)
 {
  case 1.0:
  printf("yes");
  break;
  default:
  printf("default");
 }
} */
// 10
/*
{
 const int a=1,b=2;
 int x=1;
 switch(x)
 {
  case a:
  printf("yes");
  case b:
  printf("no");
  break;
 }
} */
// 11
/*
#define max(a) a
{
 int x=1;
 switch(x)
 {
  case max(2):
  printf("yes");
  case max(1):
  printf("no");
  break;
 }
} */
// 12
/*
{
 switch(printf("Do"))
 {
  case 1:
  printf("First");
  break;
  case 2:
  printf("Second");
  break;
  default :
  printf("Default");
  break;
 }
} */
// 13
/*
{
 int a=1;
 switch(a)
 case 1:
 printf("%d",a);
 case 2:
 printf("%d",a);
 case 3:
 printf("%d",a);
 default:
 printf("%d",a);
} */
// 14
 /*
{
 switch(ch)
 {
  case 'a':
  case 'A':
  printf("true");
 }
}  */
// 15
/*
{
int a=1;
switch(++a)
{}
switch(++a);
printf("a");
} */
// 16
/*
{
 int a=1;
 switch(a)
 {
  case 4:
  printf("s1");
  break;
  case 1<<2:
  printf("s2");
 }
} */
// 17
/*
#define j 2
{
int a=1;
switch(a)
{
 case 1:
 printf("s1");
 break;
 case j:
 printf("s2");
}

} */
// 18
/*
{
 int i=4;
 switch(i)
 {
   int x=1;
   default:
   x=2;
   printf("%d",x);
   case 1:
   x=3;
   printf("%d",x);
   break;
   case 2:
   x=4;
   printf("%d",x);
 }
} */
// 19
/*
{
  int i=9;
  switch(i)
  {
  default :
  {
  case 6:
  printf("s1");
  }
  case 3:
  printf("s2");
  break;
  }
}  */
// 20
/*
{
 int i=1,j=2;
 switch(i,j)
 {
  default :
  printf("last");
  break;
  case 3:printf("three");
  break;
  case 2: printf("Two");
  break;
  case 1:
  printf("one");
  break;
 }
}       */

// 21
/*
{
 char k;
 switch(k)
 {
  default:printf("last");
  case 4:printf("four");
  case 2: printf("two");
  break;
 }
} */
// 22
/*
{
int num=0;
for(num=0;num<2;num++)
{
 switch(num)
 {
  case 0:
  num+=2;
  case 1:
  num+=1;
  case 5:
  num+=2;
  default:
  num+=3;
  break;
  }

printf("%d",num);
}
}*/
// 23
/*
{
 int i=1,j=2,c=3;
 int ch=2;
 switch(ch)
 {
  default:
  i++;
  case 1<<1==2:
  j++;
  case 1:
  i=j++;

 }
 printf("%d %d",i,j);
}       */
// 24
/*
{
int i=1,j=2,c=3;
int ch=2;
switch(ch)
{
 default :
 i++;
 case i+1==2:
 j++;
}
printf("%d %d",i,j);
} */
// 25
/*
{
int i=1;
switch(i)
{
 case 1:
 printf("A");
 break;
 case 2:
 printf("B");
 break;
 case 3-2:
 printf("c");
 break;
 default:
 printf("D");
}
} */
// 26
/*
{
  int num=10;
  switch(num)
  {}
  printf("S1");

}*/
// 27
/*
{
int i=1;
switch(i)
{
printf("hello");
case 1:
printf("s1");
break;
case 2:
printf("s2");
break;
}
} */
// 28
/*
{
switch(0)
case 0:
printf("hai");
}
// 29
{
switch(1)
case 0:
printf("hai");
}
// 30
{
switch(1)
default:
printf("hai");
}
// 31
{
switch(0)
default:
printf("hai");
}
// 32
{
switch(0)
default:
printf("hai");
} */
// 33
/*
{
int i=1;
switch(i)
{
 case 1:
 printf("case 1");
 break;
 case 1*4+2:
 printf("case 6");
}
} */
// 34
/*
{
 int i=0;
 switch(printf("k"),printf("ku"))
 {
 case 1:
 printf("%d",i);
 break;
 case 2:
 printf("%d",++i);

 }
 }*/

 // 36
 /*
 {
  switch(5||2|1)
  {
  case 3&2:
  printf("1");
  break;
  case -~11:
  printf("2");
  break;
  case 6-3<<2:
  printf("3");
  break;
  case 5>=5:
  printf("4");
  }
 } */
 // 37
 /*
 {
  switch(6)
  {
   case 6.0f:
   printf("1");
   break;
     case 6.0:
   printf("2");
   break;
     case 6.0L:
   printf("3");
   break;
   default:
   printf("4");
  }
 } */
 // 38
 /*
 {
  switch(0X0)
  {
  case NULL:printf("1");
  break;
    case '\0':printf("2");
  break;

    case 0:printf("3");
  break;
  default :
  printf("4");
  }
 } */
 // 39
 /*
 {
  switch(5/2*6+3.0)
  {
   case 3:
   printf("1");
   break;
     case 15:
   printf("2");
   break;
     case 0:
   printf("3");
   break;
   default:
   printf("4");
  }
 } */

 // 40
 /*
 {
 unsigned char c=280;
 switch(c)
 {
  printf("1");
  case 280:printf("2");
  case 24: printf("3");
  default:printf("4");
  printf("5");
 }
 } */

 //41
 /*
 {
  int x=3;
  while(1)
  {
  switch(x)
  {
  case 5/2:
  x+=x+++x;
  case 3%4:
  x+=x---x;
  continue;
  case 3>=3:x+=!!!x;
  break;
  case 5&&0:
  x+=~~~x;
  continue;
  default:
  x+=-x--;
  }
  break;
  }
  printf("%d",x);
 }               */
 // 42
 /*
 {
  char *str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int a=2;
  switch('A')
  {
   case 97:
   switch(97)
   {
    default:
    str+=1;
   }
   case 65:
   switch(97)
   {
   case 'A':
   str+=2;
   case 'a':str+=4;
   }
   default:
   for(;a;a--)
   str+=8;
  }
  printf("%s",str);
 }  */

 getch();
}