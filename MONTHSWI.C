char* getmonth(int n)
{ int x;
 if(n>12)
 x=n%13+1;
 else
 x=n;
 {
switch(x)
{
  case 1:
  return "Jan";
  case 2:
  return "Feb";
  case 3:
  return "Mar";
  case 4:
  return "Apr";
  case 5:
  return "May";
  case 6:
  return "Jun";
  case 7:
  return "July";
  case 8:
  return "Aug";
  case 9:
  return "Sep";
  case 10:
  return "Oct";
  case 11:
  return "Nov";
  case 12:
  return "Dec";

  default:
  return "Invalid input";
  }
  }
  }

  void main()
  {
  int n;
  clrscr();
  printf("Enter the Number");
  scanf("%d",&n);
  printf("%s",getmonth(n));
  getch();
  }