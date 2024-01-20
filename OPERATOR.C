#include<stdio.h>
void main()
{
clrscr();

 // 1
   /*
  {
  int num1=100,num2,num3;
  num3=num1>=5?num2=100:num3=200;
  printf("%d %d",num2,num3);
  }  */


// 2
/* {
  int num1=100,num2,num3;
  num3=num1>=5?(num2=100):(num3=200);
  printf("%d %d",num2,num3);
  }*/
// 3
 /*
 {
  int num1=100,num2,num3;
  num3=num1>=5?num2=100:num3;
  printf("%d %d",num2,num3);
  }*/
// 4
/*
{
printf("%d",10?0?20?35:45:55:65);
} */
// 5
/*
{
int x=2,y=2;
float f=y+x/=x/y;
printf("%d %f",x,f);
} */
//6
/*
{
int i=0;
i=((5,(i=3)),i=1);
printf("%d",i);
} */
// 7
// 8
/*
{
 int x,a=3;
 x=+ +a+ + +a+ + +5;
 printf("%d %d",x,a);
}   */
// 9
/*
{
int num,i=0;
num=-++i+ ++-i;
printf("%d",num);
} */
// 10
/*
{
int num,a=5;
num=-a--+ +++a;
printf("%d %d",num,a);
} */
// 11
/*
{
int num,a=15;
num=- - - -a--;
printf("%d %d",num,a);
}  */
// 12
/*
{
int num,a=2;
num=++a,++a,a++;
printf("%d %d",num,a);
} */
// 13
/*
{
 int x,i=2;
x=~-!++i;
printf("%d %d",x,i);
} */
// 14
/*
{
float f=5.5;
(int)f++;
((int)f)++;
printf("%f",f);
} */
// 15
/*
{
printf("%d",sizeof(5<<1));
} */
// 16
/*
{
int i=4,j=8;
printf("%d %d %d",i|j&j|i,i|j&&j|i,i^j);
}  */
// 17
/*
{
 int a=1;
 printf("%d %d %d",sizeof(a++*5.0),sizeof(++a>>2),sizeof(++a||a*0));
 }*/

// 18
/*
{
 double b=5 & 3 && 4 || 5 | 6;
 printf("%lf",b);
}
*/
// 19
/*
{
 int k=0;
 double b=k++ + ++k +k--;
 printf("%d",k);
} */
// 20 d
// 21 c
// 22 d
// 23 b
// 24 c
// 25 a
// 26 d
// 27
/*
{
 double b = 5 % 3 & 4 + 5 *6;
 printf("%lf",b);
} */
// 28
/*
{
 double b = 3 && 5 & 4 % 3;
 printf("%lf",b);
}
  */

// 29
/*
{
 int x=0,y=2;
 int z=~x&y;
 printf("%d\n",z);
} */
// 30
/*
{
  int x=2,y=2;
 int z=x^y&1;
 printf("%d\n",z);
} */
// 31
/*
{
  int x=3,y=2;
 int z=x<<1>>5;
 printf("%d\n",z);
} */
// 32
/*
{
  int x=3,y=2;
 int z=x/=y%=2;
 printf("%d\n",z);
} */
// 33
/*
{
 int h=8;
 int b=4*6+3*4<3?4:3;
 printf("%d\n",b);
} */
// 34
/*
{
int b=5&4&6;
printf("%d",b);
} */
// 35
/*
{
int b=5&4|6;
printf("%d",b);
} */
// 36
/*
{
 int b=5+7*4-9*(3,2);
 printf("%d",b);
} */
// 37
/*
{
int h=8;
int b=(h++,h++);
printf("%d %d",b,h);
} */
// 38
/*
{
 int y=2;
 int z=y+(y=10);
 printf("%d",z);
} */
// 39
/*
{
char c=-'a';
printf("%d",c);
}       */
// 40
/*
{
 int num,a=5;
 num=-a--;
 printf("%d %d",num,a);
}    */
// 41
      /*
{
 int t,a=5,b=10,c=15;
 t=(++a&++b,++a),++a||++c;
 printf("%d %d %d %d",t,a,b,c);
}                    */
// 42
/*
{
int num,i=0;
num=-++i+ ++-i;
printf("%d",num);
} */
// 43
  /*
{
int x,i=2;
x=~!++i;
printf("%d",x);

}                 */
// 44
/*
{
  int y=1,x=0;
  int l=(y++,x++)?y:x;
  printf("%d",l);
} */
// 45
 /*
{
int k=8,m=7;
int z=k<m?k++:m++;
printf("%d %d %d",z);
}*/
// 46
/*
{
int x=2,y=2;
x/=x/y;
printf("%d",x);
} */
//47
/*
{
 int x=1,y=0;
 x&&=y;
 printf("%d",x);
} */
// 48
/*
{
int x=1,y=1;
printf("%d %d %d",x,y,x=1&&y=0);
}  */
// 49
/*
{
 char a='a';
 int x=(a%10)++;
 printf("%d",x);
} */
// 50
/*
{
 int a=1,b=1,d=1;
 printf("%d %d %d",++a + ++a+a++,a++ + ++b,++d+ d++ +a++);

} */
// 51
/*
{
 int a=1;
 a<<1;
 printf("%d",a);
} */
// 52
/*
{
int i=1;
i=i+2*i++;
printf("%d",i);
 }*/

// 53
/*
{
 float a=10;
 a/=5+3;
 printf("%f",a);
} */
// 54
  /*
{
  printf("%d",-0.00002 && 4);
}        */
// 55
/*
{
 float f=12/5*1.0;
 printf("%f",f);
} */
// 56
 /*
{
 int i=4*6-3/2>>1%2-4^3;
 printf("%d",i);
}*/
// 57
    /*
{
 int j=0,i=0,t=1,r;
 r=(t&0);
 printf("%d %d\n",i,r);
    r=(t&&0);
 printf("%d %d\n",i,r);
   r=(t|0);
 printf("%d %d\n",j,r);
  r=(t||0);
 printf("%d %d\n",j,r);
}
  */

// 58
/*
{
 printf("%f\n",1.0/3.0);
 printf("%d",(1.0-1.0/3.0)==(2.0/3.0));
}
  */

// 59
/*
{
 printf("%d",5>3);
}
  */
// 60
/*
{
 const int x=10;
 printf("%d",sizeof(x=1));
} */
// 61
/*
{
 int x;
 char ch;
 printf("%d %d %d %d\n",sizeof(x),sizeof(fun()),sizeof(int),sizeof(10));
 printf("%d %d",sizeof(char),sizeof('A'));
 }*/
// 62
/*
printf("%d ",printf("%d",sizeof(float)));
 */
// 63
/*
{
char str1[]="abc";
char *str2="abc";
printf("%d %d %d",sizeof("abc"),sizeof(str1),sizeof(str2));
} */
// 64
/*
{
printf("%d",-1==65535);
} */
// 65
/*
{
 float f=2.3e5;
 printf("%d %d ",2e3==2000.0,2.3e5==f);
}*/
// 66
/*
{
 int a=-010;
 int b=-0x10;
 int c=-10;
 printf("%d %d %d",a,b,c);
} */
// 67
/*
{
 x=10;
 y=20;
 res=x+(~y+1);
 printf("%d",res);
} */
// 68
/*
{
unsigned int a=65535;
unsigned int b=65530;
long l=32767+1;
int i=12/5;
printf("%d %d %ld %d %d",a==-1,-1<b,l,i,200*200/200);
} */
// 69
/*
{
int a=0,b=0;
(1==0?a:b)=
10;
printf("%d %d",a,b);
} */
// 70
/*
{
 int a=1,b=a++==++a;
 printf("%d %d\n",a,b);
 a=1;
 b=a++==++a;
 printf("%d %d",a,b);
} */
// 71
/*
{
int a=1;
a=a++*++a;
printf("%d",a);
} */
// 72
/*
{
int x=1,y=1,z=1;
x+=y+=z;
printf("%d %d %d\n",x,y,z);
printf("%d\n",x<y?x:y);
printf("%d\n",x<y?x++:y++);
printf("%d %d\n",x,y);
printf("%d\n",(z>=y>=x)?1:0);
x=3;
y=z=4;
printf("%d\n",z>=y&&y>=x);
 } */
// 73
/*
{
int x,y,z;
x=y=z=1;
++x||++y&&++z;
printf("%d %d %d\n",x,y,z);
x=y=z=1;
++x&&++y||++z;
printf("%d %d %d\n",x,y,z);

x=y=z=1;
++x&&++y&&++z;
printf("%d %d %d\n",x,y,z);
x=y=z=-1;
++x&&++y||++z;
printf("%d %d %d\n",x,y,z);
x=y=z=-1;
++x||++y&&++z;
printf("%d %d %d\n",x,y,z);
x=y=z=-1;
++x&&++y&&++z;
printf("%d %d %d",x,y,z);
} */
// 74
/*
{
int x=2,y=1,z=0;
x=x&&y||z;
printf("%d\n",x);
printf("%d\n",x||!y&&z);
z+=-x++ + ++y;
printf("%d %d\n",x,z);
z=x/++x;
printf("%d",z);

} */
// 75
   /*
{
 int x=03,y=02,z=01;
 printf("%d\n",x|y&z);
  printf("%d\n",x|y&~z);
   printf("%d\n",x^y&~z);
    printf("%d\n",x&y&&z);
    x=1;
    y=-1;
     printf("%d\n",!x|x);
      printf("%d\n",~x|x);
      printf("%d\n",x^x);
      x<<=3;
       printf("%d\n",x);
       y<<=3;
       printf("%d\n",y);
       y>>=3;
       printf("%d\n",y);

}*/
// 76
/*

{
 int num1=1,num2=5;
 num2=num1;
 num2?(num2+1,num1-1)?num1:num2:num2;
 printf("%d %d",num1,num2);
} */
// 77
/*
{
int i=4,j=8;
printf("%d %d %d",i|j&j|i,i|j&&j|i,i^j);
} */
// 78 true
// 79 false
// 80 A
// 81 D
// 82 c
// 83 C
// 84 1 2 3
// 85 2-1-3-4
// 86
/*
{
 int x=12,y=7,z;
 z=x!=4 || y==2;
 printf("%d",z);
} */
// 87
/*
{
 static int a[20];
 int i=0;
 a[i]=i;
 printf("%d %d %d",a[0],a[1],i);
} */
// 88
/*
{
int i=4,j=-1,k=0,x,y,z,w;
w=i||j||k;
x=x&&j&&k;
y=i||j&&k;
z=i&&j||k;

printf("%d %d %d %d",w,x,y,z);
} */
// 89
/*
{
 int x=55;
 printf("%d %d %d",x<=55,x=40,x>=10);
}           */
// 90
/*
{
 int k,num=30;
 k=(num>5?(num<=10?100:200):500);
 printf("%d",num);
} */
// 91
/*
{
 int i=2;
 int j=i+(1,2,3,4,5);
 printf("%d",j);
} */
// 92 True
// 93 & put 0
// 94 | put 1
// 95 use & operate put 1
// 96
// 97
/*

{
 unsigned int m=32;
 printf("%x",~m);
} */
// 98
/*
{
 printf("%x",-1<<3);
} */
// 99
/*
{
  unsigned int a=0xffff;
    ~a;
    printf("%x",a);
} */
// 100
/*
{
 unsigned char i=0x80;
 printf("%d",i<<1);
} */
// 101
/*
{
 int x;
 x=3+4*5-6;
 printf("%d",x);
 x=3+4%5-6;
  printf(" %d ",x);
  x=3+4%-6/5;
   printf("%d ",x);
  x=(7+6)%5/2;
   printf("%d",x);
} */
// 102
/*
{
 int x=2,y,z;
 x*=3+2;
  printf("%d",x);
 x*=y=z=4;
  printf("%d",x);
 x=y==z;
  printf("%d",x);
 x==(y=z);
  printf("%d",x);
} */
// 103
/*
{
int x=2,y=1,z=0;
x=x&&y||z;
printf("%d\n",x);
printf("%d\n",x||!y&&z);
x=y=1;
x=x++-1;
printf("%d %d\n",x,z);
z+=-x++ + ++y;
printf("%d %d\n",x,z);
z=x/++x;
printf("%d",z);

} */

// 104 same as 75
// 105 same as 72
// 106 same as 73
// 107
/*
{
 int a,b,c;
 a=b=c=20;
 printf("%d %d %d ",a,b,c);
 printf("%d",(a==b==c));
} */
// 108
/*
{
 int j=0,i=0,t=1,r;
 r=(t&0<(i+=1));
 printf("%d %d\n",i,r);
    r=(t&&0<(i+=2));
 printf("%d %d\n",i,r);
   r=(t|0<(j+=1));
 printf("%d %d\n",j,r);
  r=(t||0<(j+=2));
 printf("%d %d\n",j,r);
} */
// 109 same as 76
// 110
/*
{
 printf("%d ",-1&(0<<15));
 printf("%d",-1&(1<<15));
} */
// 111
/*
{
 printf("%f",10/4*2.0);
} */
// 112
/*
{
 int i=1;
 printf("%d",++i,i++*++i,i=10);
} */
// 113 same as 17
// 114 same as 91
// 115
{
}
// 116 same as 89
// 117 same as 82
// 118 same as 16
// 119
/*
{
 int i=32,j=0*20,k,l,m;
 k=i|j;
 l=i&j;
 m=i^j;
 printf("%d %d %d %d %d",i,j,k,l,m);
} */
// 120
/*
{
 printf("%d >> %d %d>>%d",4>>1,8>>1);
} */
// 121
/*
{
int var=5;
printf("%d",var=++var==6);
}  */
// 122
/*
{
long int a;
(float)a=6.5;
printf("%f",a);
} */
// 123 same as 110
//124
/*
{
 L value required
} */
// 125 same as 17
// 126
/*
{
int x,y;
x=(unsigned)~!printf>>12;
y=~!printf>>12;
printf("%x %x ",x,y);
} */
// 127
/*
{
  short m=9,n=0,p=0;
  p+=n+=m;
  p+=n+=m+=-p;

  printf("%d %d %d",m,n,p);
} */
// 128
/*
{
 int a=50,b=50;
 a=a++ + ++b;
 b=b++ + ++a;
 printf("%d %d",a,b);
} */
// 129
/*
{
 int a,b,c;
 a=b=1;
 c=2*(++a>1||++b>1);
 printf("%d %d %d",a,b,c);
 a=b=1;
 c=a++>(1||b++>1);
 printf("\n%d %d %d",a,b,c);
} */
// 130
/*
{
 float x;
 int a;
 printf("Enter float number\n");
 scanf("%f",&x);
 a=(int)(x+1);
 printf("%d",a);
} */
// 131
/*
{
 float x;
 int a;
 printf("Enter float number\n");
 scanf("%f",&x);
 a=(int)(x+0.5);
 printf("%d",a);
} */
// 132
         /*
{
 float x;
 int a;
 clrscr();
 printf("Enter float number\n");
 scanf("%f",&x);
 a=(int)(x);
 printf("%d",a);
}      */

// 133
/*
{
int k,i=50,j=100,l;
i=i|(j&&100);
k=i||(j||100);
l=i&(j&&100);
printf("%d %d %d %d",i,j,k,l);
} */
// 134
/*
{
int i=5,j=8;
j=j||(i++&&printf("Hello"));
printf("%d %d",i,j);
} */
// 135
/*
{
 int x;
 x=~!printf;
 printf("%x",x);
} */
// 136
/*
{
2||printf("hi")&&printf("%s","hello");
} */
// 137
/*
{
 int i=5;
 printf("i++*++i");
}  */
// 138
/*
{
 printf("%d",3|printf("hi\n")||printf("%s","hello\n"));
} */
// 139
/*
{
2|printf("hi")&&printf("%s","hello");
} */
// 140
/*
{
 printf("%d",900*90/90);
} */
// 141
/*
{
 int k;
printf("%o",k=(~2|3)>~0?7:8<<2);
} */
//142
/*
{
int a=11,b=2;
int c;
c=a/b;
printf("%d",c);
} */
// 143
/*
{
{
int a=11,b=2;
float c;
c=a/b;
printf("%f",c);
}

} */
// 144
/*
{
int a,b,c;
a=10;
++a;
b=a;
printf("%d %d\n",a,b);
a=10;
a++;
b=a;
printf("%d %d\n",a,b);
a=10;

b=a++;
printf("%d %d\n",a,b);
a=10;
b=++a;
printf("%d %d\n",a,b);
 a=10;
 b=20;
c=(++a)+(b++);
printf("%d %d %d\n",a,b,c);
a=10;
b=(++a)+(a++);
printf("%d %d\n",a,b);
a=10;
b=a*2+(++a);
printf("%d %d\n",a,b);
a=10;
b=(++a*2)+(a++)*3;
printf("%d %d\n",a,b);
} */
//145
/*
{
 int a,b,c;
 a=10;
 b=20;
 c=30;
 b+=a;
 c-=a;
 printf("%d %d %d",a,b,c);
 a=10;
 b=20;
 c=30;
 c*=b+=a;
 printf("%d %d %d",a,b,c);
} */
// 146
/*
{
 char ch[]="%dabc%c";
 printf("%s\n","%dabc%c");
 printf(ch);
}         */
// 147
/*
{
int i=5;i=(i<=5)++;
printf("%d",i);
} */
// 148
/*
{
  int var1=4,var2=6;
  var2=var2||var1++&&printf("computer");
  printf("%d %d",var1,var2);
} */
// 149 same as 148
// 150
/*
{
 unsigned a=-1;
 int b;
 printf("%u\n",++a);
 printf("%u",b=-a/);
} */
// 151
/*
{
 int var=- -3;
 printf("%d\n",var);
 var=5- -3;
 printf("%d\n",var);
} */
// 152
/*
{
 int var1=1,var2=12,var3=12;
 var1=var2==var3;
 printf("%d",var1);
} */
// 153
/*
{
int var1=15,var2=10,p,q;
p=var1>14;
q=var1>8 && var2==8;
printf("%d %d",p,q);

} */
// 154
/*
{
  int i1=-1;
  printf("%d\n",i1);
  printf("%d",i1*-1);
}   */
// 155
/*
{
 int i=2,j=3,k=0;
 int p,q,r,s,t;
 p=(i,j,k);
 q=i,j,k;
 r=i+j,i*5;
 s=(i+j,i*5);
 printf("%d %d %d %d",p,q,r,s);
} */
// 156
/*
{
int a=5,c=2,d=4,n=6;
float ans;
ans=10.2/a+(2*a+(3c+4)/a*d/(12/n);
printf("%f",ans);
} */
// 157
/*
{
 int a,b,c,d;
 a=b=c=1;
 d=a++<=1||++b>=1&&c++<=1;
 printf("%d %d %d %d",a,b,c,d);
} */
// 158
/*
{
 int a,b,c,d;
 a=b=c=5;
 d=a++<=5&&++b>=5&&c++>5;
 printf("%d %d %d %d",a,b,c,d);
} */
// 159
/*
{
 int a=100,b=200;
 a=--a + b++;
 b=++b +a--;
 printf("%d %d",a,b);
 }
  */

// 160
/*
{
 int a,b;
 a=200*200/200;
 b=200/200*200;
 printf("%d %d",a,b);
} */
// 161
/*
{
 int a=1;
 printf("%d\n",++a*++a*++a);
   a=1;
 printf("%d\n",a++*++a*++a);
   a=1;
 printf("%d\n",a++*a++*++a);
   a=1;
 printf("%d\n",a++*++a*a++);
   a=1;
 printf("%d\n",++a*a++*a++);
} */
// 162
/*
{
unsigned int res;
res=(64>>(2+1-2))&(~(1<<2));
printf("%d",res);
} */
// 163
/*
{
unsigned int a,b,c,d,e,f;
a=b=c=d=e=f=32;
a<<=2;
b>>=2;
c^=2;
d|=2;
e&=2;
printf("%d %d %d %d %d",a,b,c,d,e,f);
} */
// 164
/*
{
int i=5;
printf("%d %d",i+++++i,i);
} */
// 165
/*
{
int i=10;
printf("%d %d %d",++i,i++,++i);
} */
// 166
/*
{
 int a=453>>16;
 printf("%d",a);
}  */
// 167
/*
{
 int a=~0;
 printf("%d",a);
} */
// 168
/*
{
  printf("%d %d %d",-10^9,-10|9,-10&9);
} */
// 169
/*
{
int a;
a=10;
a*=10+2;
printf("%d %d ",++a,a++);
} */
// 170
/*
{
printf("%d",100>90>80);
} */
// 171
/*
{
char i;
i='A';
printf("%c\n",i>='A'&&i<='Z'?i+'a'-'A':i);
printf("%c",i>='A'&&i<-'Z'?i:i+'A'-'A');

 }*/

// 172
/*
{
 int i=60;
 printf("%d %d %d",i<=60,i=20,i>=10);
} */
// 173
/*
{
 int a=100,b=200,c;
 c=(a==100||b>=200);
 printf("%d",c);
} */




getch();
}