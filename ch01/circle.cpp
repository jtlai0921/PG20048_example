//circle.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ float radius, area, periphery;
  radius = 12.15;							//�]�b�|��
  area = 3.14159 * radius * radius;	//�D�ꭱ�n
  periphery = 4 * 3.14159 * radius;	//�D�P��
  cout << "�ꭱ�n=" << area << endl;
  cout << "��P��=" << periphery << endl;
  getch();					//�Ȱ�
}