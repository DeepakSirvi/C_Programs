void main()
{
 int a[]={2,3,5,7,9,12,24,45,67,89},s,l,t,mid,flag=0;
clrscr();
s=0;
l=sizeof(a)/2;
t=3;
while(s<=l)
{
 mid=(s+l)/2;
  if(t<a[mid])
   l=mid-1;
   else if(t>a[mid])
     s=mid+1;
     else
     {
     printf("found");
     flag=1;
     break;
     }
}
if(flag==0)
printf("Not found");
getch();
}