//field06.cpp    			�]�w�V�����
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ const int f=10;   		//�]�w��X��e
  char ch='A';
  cout << "�V�����:\n";
  cout.setf(ios::left,ios::adjustfield);
  cout << setw(f) << ch << setw(f) << "�_�L�y" << endl;
  cout << setw(f) << "�r��" << setw(f) << "Clinton" << endl;
  cout << setw(f) << "���s��" << setw(f) << "�F�v�ͺA" << endl;
  getch();	//�Ȱ�
}
