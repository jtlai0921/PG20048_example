//str_getline.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=21;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"��J�m�W:";
  cin.getline(name,20);
  cout <<"�ߦn�B�ʦW:";
  cin.getline(sport,20);

  cout <<name <<" ,�A���B��"<<sport<<"�ڤ]�ܳ��w\n";
  getch();
}