//str_get.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=21;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"��J�m�W:";
  cin.get(name,20);
  cout <<"�ߦn�B�ʦW:";
  cin.get(sport,20);

  cout <<"\n"<<name <<" ,�A���B��"<<sport<<"�ڤ]�ܳ��w\n";
  getch();
}