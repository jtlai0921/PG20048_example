//itoa.cpp
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  int number = 2349;
  char string[25];
  itoa(number, string, 10);
  cout<<"整數"<< number<<"轉為以10為底之字串為"<<string<<endl;
  itoa(number, string, 16);
  cout<<"整數"<< number<<"轉為以16為底之字串為"<<string<<endl;
   itoa(number, string, 2);
  cout<<"整數"<< number<<"轉為以2為底之字串為"<<string<<endl;
  getch();
}