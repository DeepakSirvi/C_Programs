
char* binToHex(char bin[])
{
int i,j=3;
static char hex[5]={"0000"};
for(i=15;i>=0;i-=4)
{
hex[j]=((bin[i]-48)*1)+((bin[i-1]-48)*2)+((bin[i-2]-48)*4)+((bin[i-3]-48)*8)+48;
if(hex[j]>57)
hex[j]=hex[j]+7;
j--;
}

return hex;
}





void main()
{ char bin[17]={"0000000000000000"};
int s;
clrscr();
printf("Enter the binary number");
scanf("%s",&bin);
s=binToHex(bin);
printf("%s",s);
getch();
}