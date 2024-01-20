void main()
{
char far *p=0xB8000000;
clrscr();
  *p='k';
  p+=2;
  *p='L';
getch();
}