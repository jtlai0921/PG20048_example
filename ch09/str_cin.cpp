//str_cin.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=20;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"��J�m�W:";
  cin >> name;
  cout <<"�ߦn�B�ʦW:";
  cin >> sport;

  cout <<"\n"<< name <<" ,�A���B��"<<sport<<"�ڤ]�ܳ��w\n";
  getch();
}