//mminus.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,b=14;
  a--;		//����a=a-1;���o 9
  --b;		//����b=b-1;�e��o 13
  cout << "a--="<< a << endl;
  cout << "--b="<< b << endl;
  cout << "a="<< a-- << endl;	//��X 9 ��A��@
  cout << "a--="<< a << endl;	//��@�ᤧ�� 8
  cout << "b="<< --b << endl;	//����@��A��X 12
  getch();
}
