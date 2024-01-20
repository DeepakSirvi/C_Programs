void main()
{
  int x,y;
  clrscr();
  while(1)
  { x=1;
  y=1;
  for(;x<=72;x+=3,y++)
  {
    clrscr();
    gotoxy(x,y);
    printf("Hello");
    delay(100);
    if(kbhit())
    break;
   }
  if(kbhit())
  break;
  }
getch();
}


  /*
void main()
{
 int x,y;
 while(1)
 { x=1;
   y=1;
   for(;x<=72;x+=3,y++)
   {
    clrscr();
    gotoxy(x,y);
    printf("====>");
    delay(98);
   if(kbhit())
     break;
     }

   if(kbhit())
   break;
 }
getch();
}   */



/*void main()
{
  int x=1,y=1;
  while(1)
  {   x=1,y=1;
     for(;x<72;x+=3,y++)
     { clrscr();
      gotoxy(x,y);
       printf("Hello");
       delay(100);
        if(kbhit())
      break;
     }
     if(kbhit())
     break;
  }
getch();
}
  */