//while_a.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short i=1;
  while (i++ <= 10)		//���P�_�b�[�@
  cout << 'A';
  cout << endl;
  i=0;
  while (i < 10)
  cout << char('A' + i++);	//���O�ഫ�ݧ��ܱ���
  cout << endl;
  getch();
}