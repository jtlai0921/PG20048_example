//cin03.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ int a,b;
  cout << "��J16�i��a,b=";      //��J�p 0xa 0xb
  cin >> a >> b;
  cout << "hex a+b=" << hex << "0x" << (a+b) << endl;
  cout << "��J8 �i��a,b=";      //��J�p 07 03
  cin >> a >> b;
  cout << "oct a+b=" << oct << "0" << (a+b) << endl;
  getch(); 	//�Ȱ�
}