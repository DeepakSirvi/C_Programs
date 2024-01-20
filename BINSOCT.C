
char* binToOct(char bin[])
{ static char oct[7]={"000000"};
 int i,j=5;
 for(i=15;i>0;i-=3)
 {
  oct[j]=(((bin[i]-48)*1)+((bin[i-1]-48)*2)+((bin[i-2]-48)*4))+48;
  j--;
 }
 oct[0]=bin[0];
return oct;
}



void main()
{ char bin[17]={"0000000000000000"};
int s;
clrscr();
printf("Enter the binary number");
scanf("%s",&bin);
s=binToOct(bin);
printf("%s",s);
getch();
}