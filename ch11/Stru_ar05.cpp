//stru_ar05.cpp         ���c�}�C�j�p�ѨϥΪ̿�J
#include <iostream.h>	//cout,cin
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
struct rec
{ char seat[3];			//�W�[�y��
  int chi,eng,math,total;
  float ave;
};

void main()
{ rec *student;
  int size;
  cout <<"��J�}�C�j�p:";
  cin >> size;
  student = new rec[size];	//�t�m���c�}�C
  int i;
  for (i=0;i<size;i++)
  { cout <<"��"<<i<<"��y��=";cin >> (student+i)->seat;	//���Ф覡
    cout <<"��"<<i<<"�� chi=";cin >> student[i].chi;
	 cout <<"��"<<i<<"�� eng=";cin >> (student+i)->eng;
	 cout <<"��"<<i<<"��math=";cin >> (student+i)->math;
  }
  for (i=0;i<size;i++)
  { (student+i)->total=(student+i)->chi+(student+i)->eng+(student+i)->math;
	 (student+i)->ave=(student+i)->total/3.0;	//�D����
  }
  cout << "�ǥͪ����Z:\n";
  cout <<"�y�� ��� �^�� �ƾ� �`�� ����\n";	//��X�U������
  for (i=0;i<size;i++)
  { cout<<setw(3)<<student[i].seat;
    cout<<setw(5)<<(student+i)->chi;
	 cout<<setw(5)<<(student+i)->eng;
	 cout<<setw(5)<<(student+i)->math;
	 cout<<setw(5)<<(student+i)->total;
	 cout<<setw(6)<<(student+i)->ave<<"\n";
  }
  getch();
}