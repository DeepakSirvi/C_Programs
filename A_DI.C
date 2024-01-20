int sort(int a,int  b)
{
  if(a[0]>b[0])
  {
  return 1;
//   s[i]=s[i]+s[j]-(s[j]=s[i]);
   }
 return 0;
}


void main()
{int s[12]={"deepak","akash","punit","mamta","vijay","yash","aman","devendra","pooja","payal","laxmi","mannu"};
 int i,j;
 clrscr();
 for(i=0;i<12;i++)
 {
  for(j=i;j<12;j++)
  {

  if(sort(s[i],s[j]))
 // printf("%d %d\n",i,j);
   s[i]=s[i]+s[j]-(s[j]=s[i]);
  // printf("%s %s ",s[i],s[j]);
  }
}
   for(i=0;i<12;i++)
   printf("%s ",s[i]);
 getch();
}