void main()
{ char s[20];
int i=0,j,z=0;
clrscr();
printf("enter the string : ");
gets(s);
printf("%d\n",strlen(s));
j=strlen(s)-1;
while(i<j)
{if(s[i]!=s[j])
{
z=1;
break;}
i++;
j--;
}
if(z==0)
printf("%s is palindrom",s);
else
printf("%s is not palindrom",s);
getch();
}

