//str_lenu.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ unsigned int i=0,len=0;
  char str[]="���إ���x�W��";
  char *string="Yellow River";

  while (str[i++]!='\0')
  len++;
  cout<<str<<":�� "<<len/2<<" �Ӥ���r\n";

  i=len=0;
  do len++; while (string[i++]!='\0');
  cout <<string<<":��"<<len<<"�r��\n";
  getch();
}