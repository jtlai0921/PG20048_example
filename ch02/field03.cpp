//field03.cpp    			�T�ضi���X�]�w
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ int i=1;
  const int f=5;						//�`�Ƴ]�w
  cout.fill('#');   					//�]�w��R�r��
  cout << setw(f)  					//�]�w��X��e
       << hex << i << endl;		//��X16�i��
  cout << setw(f)
       << i*10 << endl; 			//��X16�i��
  cout << setw(f)
       << oct << i*100 << endl;	//��X8�i��
  cout << setw(f)
       << dec << i*100 << endl;	//��X10�i��
  getch();	//�Ȱ�
}
