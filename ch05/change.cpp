//change.cpp
#include <iostream.h>	//cout, cin
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
void main()
{ int dollar[]={500,100,50,10,5,1};	//�N��500��,100��...
  int i,change,paid;
  cout << "��J�ʪ����B: ";
  cin >> paid;
  paid %= 1000;	//�Y�W�L1000���h�D��l�B�H�K��s
  paid = 1000 - paid; //����s��
  cout << "������B��: " << paid << " ��\n";
  for (i=0;i<6;i++)
  { change = paid / dollar[i];	//�D�U���B��s�Ӽ�
    cout << setw(4) << dollar[i] << " ��= " << change << " ��\n";
    paid %= dollar[i];				//�D�l�B
  }
  getch();								//�Ȱ�
}
