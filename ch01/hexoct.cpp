//hexoct.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short chest =42;		//�Q�i��`��
  short waist = 0x42;	//�Q���i��`��
  short other = 042;		//�K�i��`��

  cout << "chest=" << chest << endl;   //�Ҭ�10�i���X
  cout << "waist=" << waist << endl;
  cout << "other=" << other << endl;
  getch();
}