//str_getget.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=21;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"��J�m�W:";
  cin.get(name,SIZE);//����C�i�X�֬�cin.get(name,SIZE).get();
  cin.get();
  cout <<"�ߦn�B�ʦW:";
  cin.get(sport,SIZE).get();

  cout <<"\n"<<name <<" ,�A���B��"<<sport<<"�ڤ]�ܳ��w\n";
  getch();
}