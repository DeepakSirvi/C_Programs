void main()
{ char s[]="dollop";
int i,c=0,v=0;
clrscr();
for(i=0;i<strlen(s);i++)
{if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
v++;
//printf("vowel\n");
else
c++;
//printf("consonant\n");
}
printf("V --> %d\n C--> %d",v,c);
getch();
}