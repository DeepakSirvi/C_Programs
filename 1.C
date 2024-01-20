

#include<math.h>
// Check prime
int isprime(int n)
{
  int i,f=0;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
     f=1;
     }
     }
     if(f==0)
     return 1;
     else
     return 0;
     }

void main()
{
clrscr();
{
 char s;
 scanf("%s",s);
 printf("%s",s);
}
/*
{
int y=17;
if(!!y)
printf("y=%d",!y);
else
printf("y=%d",y);

} */

/*

{
 L1:
 {
 int a=3;
 printf("%d",a);
 a--;
 if(a>1)
 goto L1;
 }
}*/
/*

{
float f=5;
float x;
x=f%2;
printf("%f",x);
}*/

/*
{
 int n;
 scanf("%d",&n);
 {
  int a[n],i;

 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 printf("%d",a[i]);
 }
 }
 getch();
} */

/*
{
 if(printf("%c",65)){}
} */
/*
{
 int var1=0,var2=20;
 char num1=1,num2=10;
 if(var1,var2,num1,num2)
 printf("computer");
} */
/*
{
 int x=1;
 if("%d=hello",x);
} */
/*
{
 int a;
 if(a=1 && 0)
 printf("if %d",a);
 else
 printf("else %d",a);

} */
/*
{
 int a=11,b=2;
 float c;
clrscr();
c=a/b;
 printf("%f",c);

} */

/*
{
  clrscr();
  printf("%d",sizeof("kamal"));
}   */
/*
for(int c;c-5;)
printf("Happy brithday %s\n",++c-4?"to you":"dear c"); */

/*{ int x=1;
for(printf("Hello\n");x<=3;printf("Great\n") )
{
printf("%d\n",x);
x++;
}  */

// Program two add two number without using Additon operater
/*
{
 int a=5,b=4;
 clrscr();
 a=a+=b;
 printf("%d",a);
 }*/

 // Program two subtract two number without using Additon operater
 /*
{
 int a=5,b=4;
 clrscr();
 a=a-=b;
 printf("%d",a);
 }*/

  // Program to solve Quadratic equation
  /*
  float a,b,c;
  float sq;
  clrscr();
 printf("Enter the number ax^2+bx+c=0 a b c repectively");
 scanf("%f%f%f",&a,&b,&c);
 //printf("%f%f%f\n",a,b,c);
 sq=(b*b)-(4*a*c);
// printf("%f\n",sq);

if(sq<0)
 {
 sq=sq*-1;
 sq=sqrt(sq);
 printf("%f\n",sq);
printf("%f+(%fi)\n",-b/(2*a),sq/(2*a));
printf("%f-(%fi)\n",-b/(2*a),sq/(2*a));
 }
 else
 {
 sq=sqrt(sq);
 printf("%f\n",sq);
 printf("%f\n",(-b+sq)/(2*a));
 printf("%f\n",(-b-sq)/(2*a));
  }

     */

 // Find out  prime factor of number
 /*
 {
  int n,i,j;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      if(isprime(i))
       printf("%d\n",i);
       }
  }
  }*/


  // Delete all consonant of string;
  /*
 {
   char str[100],ch,dstr[100]={'\0'};
   int i,j=00;
   clrscr();
   printf("Enter the Number");
   gets(str);

   for(i=0;i<strlen(str);i++)
   {
     ch=str[i];
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
     {
       dstr[j]=ch;
       j++;
       }
       else
       str[i]=' ';

   }
   puts(dstr);
   printf("\n");
   puts(str);

 }
   */

   // Delete duplicate number in an array
    /*  {
        int a[5],i,j,b[5];
        clrscr();
        printf("Enter the number");
        for(i=0;i<5;i++)
        scanf("%d",&a[i]);

        for(i=0;i<5;i++)
        {
         for(j=i+1;j<5;j++)
         {
          if(a[i]==a[j])
          {
          b[i]=0;
          break;
           }
           else
           b[i]=a[i];

         }

        }
        b[4]=a[4];
        for(i=0;i<5;i++)
        printf("%d\n",b[i]);
      }
      */

    // Insert element at desired position
    /*

    {
     int a[5],i,n;
     clrscr();
     printf("Enter the number\n");
     for(i=0;i<5;i++)
     scanf("%d",&a[i]);
     printf("Enter the position of element to replace : ");
     scanf("%d",&i);
     printf("Enter the number to replace : ");
     scanf("%d",&n);
     a[i-1]=n;
     for(i=0;i<5;i++)
     printf("%d ",a[i]);

    } */

   // To reverse string using other string
       /*

   {
     int i,j=0;
     char str[]="moom";
     char rev[20]={'\0'};
     clrscr();
     for(i=strlen(str)-1;i>=0;i--,j++)
     {
     rev[j]=str[i];
     }
     for(i=0;i<strlen(str);i++)
     { j=0;
     if(str[i]!=rev[i])
     { j=1;
     break;}
     }
     if(j==0)
     printf("Pallindrum");
     else
     printf("Not pallindrum");
   }

         */
 getch();

 }