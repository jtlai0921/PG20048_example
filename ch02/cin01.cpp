//cin01.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ float radius,area;
  const float PI = 3.14159;		//�`�Ƴ]�w
  cout << "��J�b�|:";
  cin >> radius;
  area = PI * radius * radius;	//���n�p��
  cout << "���n=" << area << endl;
  getch();	//�Ȱ�
}  