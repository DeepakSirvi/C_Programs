void main()
{ int n;
clrscr();
printf("Enter the number");
scanf("%d",&n);
switch(n)
  { case 0:
   printf("Sun");
   break;
    case 1:
    printf("Mon");
   break;
    case 2:
    printf("Tue");
       break;
    case 3:
    printf("Wed");
       break;
    case 4:
    printf("Thu");
       break;
    case 5:
    printf("Fri");
       break;
    case 6:
    printf("sat");
       break;

    default:
    printf("Invalid Input");
       }
getch();
}