//cin05.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ double velocity,distance;
  cout << "���t(m/sec): ";	//�H��ǫ��ƿ�J3e8
  cin >> velocity;
  distance=velocity*365*24*60*60/1000;	//�@�~���Z��(����)
  cout << "�@���~���Z���� " << distance << " ����\n";	//9.4608e+12
  getch(); 	//�Ȱ�
}