//itoa.cpp
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  int number = 2349;
  char string[25];
  itoa(number, string, 10);
  cout<<"���"<< number<<"�ର�H10�������r�ꬰ"<<string<<endl;
  itoa(number, string, 16);
  cout<<"���"<< number<<"�ର�H16�������r�ꬰ"<<string<<endl;
   itoa(number, string, 2);
  cout<<"���"<< number<<"�ର�H2�������r�ꬰ"<<string<<endl;
  getch();
}