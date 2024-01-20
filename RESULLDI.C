// Compute a result of 5 subject print percentage and division
// Marks will be range of 0 to 100 .If marks is in out of range and print invalid input
// If fail in one subject ,print supplymentry .Do not mention division and percentage
// If fail in more then sunject print fail do not mention division and pertcentage



int main()
{
  int physics,chemistry,math,english,hindi,total;
  clrscr();

  printf("Enter the marks of Physics");
  scanf("%d",&physics);
  if(physics<0 || physics>100)
  {
  printf("Invalid input");
  return 0;
  }

   printf("Enter the marks of Chemistry");
  scanf("%d",&chemistry);
  if(chemistry<0 || chemistry>100)
  {
  printf("Invalid input");
  return 0;
  }


   printf("Enter the marks of Math");
  scanf("%d",&math);
  if(math<0 || math>100)
  {
  printf("Invalid input");
  return 0;
  }


   printf("Enter the marks of English");
  scanf("%d",&english);
  if(english<0 || english>100)
  {
  printf("Invalid input");
  return 0;
  }

   printf("Enter the marks of hindi");
  scanf("%d",&hindi);
  if(hindi<0 || hindi>100)
  {
  printf("Invalid input");
  return 0;
  }


  if(physics>=33 && chemistry>=33 && math>=33 && english>=33 && hindi>=33)
  {
     total=(physics+chemistry+math+english+hindi)/5;
    printf("%d\n",total);

    if(total>=75)
    printf("Pass with First division");

    if(total<75 && total>=55)
    printf("Pass with Second division");

    if(total<55 && total>=33)
    printf("Pass with Third division");

  }
     else if(physics<33 && chemistry>=33 && math>=33 && english>=33 && hindi>=33)
          printf("Supplymentry in Physics");

          else if(physics>=33 && chemistry<33 && math>=33 && english>=33 && hindi>=33)
               printf("Supplymentry in Chemistry");

                else if(physics>=33 && chemistry>=33 && math<33 && english>=33 && hindi>=33)
                     printf("Supplymentry in Math");

                      else if(physics>=33 && chemistry>=33 && math>=33 && english<33 && hindi>=33)
                           printf("Supplymentry in English");

                              else if(physics>=33 && chemistry>=33 && math>=33 && english>=33 && hindi<33)
                                   printf("Supplymentry in Hindi");

                                    else
                                    printf("FAIL");
        getch();
return 0;
}