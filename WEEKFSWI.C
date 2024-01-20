// week day with switch
void main()
{
  int i;
  clrscr();
  printf("Enter the number");
  scanf("%d",&i);

    switch(i%7)
    {
     case 0:
          {
           printf("Mon");
           break;
           }
     case 1:
           {
           printf("Tue");
           break;
           }
     case 2:
          {
           printf("Wed");
           break;
           }
     case 3:
          {
           printf("thu");
           break;
           }
     case 4:
           {
           printf("Fri");
           break;
           }
     case 5:
           {
           printf("Sat");
           break;
           }
     case 6:
           {
           printf("Sun");
            break;
            }
     default :
            printf("Invalid input");
            }

getch();
}





/*
char* getday(int n)
{
switch(n%7)
{
  case 0:
  return "Sun";
  case 1:
  return "Mon";
  case 2:
  return "Tue";
  case 3:
  return "Wed";
  case 4:
  return "Thu";
  case 5:
  return "Fri";
  case 6:
  return "Sat";

  default:
  return "Invalid input";
  }
  }

  void main()
  {
  int n;
  clrscr();
  printf("Enter the Number");
  scanf("%d",&n);
  printf("%s",getday(n));
  getch();
  }*/