//stru_ar04.cpp         ���V�w�s�b�����c�}�C
#include <iostream.h>	//cout,cin
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const int N=5;
struct rec
{ char seat[3];			//�W�[�y��
  int chi,eng,math,total;
  float ave;
};
void main()
{ rec *student,a[N];
  student = a;	//���V�w�s�b�����c�}�C
  int i;
  for (i=0;i<N;i++)
  { cout <<"��"<<i<<"��y��=";cin >> (student+i)->seat;	//���Ф覡
    cout <<"��"<<i<<"�� chi=";cin >> student[i].chi;
	 cout <<"��"<<i<<"�� eng=";cin >> (student+i)->eng;
	 cout <<"��"<<i<<"��math=";cin >> (student+i)->math;
  }
  for (i=0;i<N;i++)
  { (student+i)->total=(student+i)->chi+(student+i)->eng+(student+i)->math;	//�p���`��
	 (student+i)->ave=(student+i)->total/3.0;	//�D����
  }
  cout << "�ǥͪ����Z:\n";
  cout <<"�y�� ��� �^�� �ƾ� �`�� ����\n";	//��X�U������
  for (i=0;i<N;i++)
  { cout<<setw(3)<<student[i].seat;
    cout<<setw(5)<<(student+i)->chi;
	 cout<<setw(5)<<(student+i)->eng;
	 cout<<setw(5)<<(student+i)->math;
	 cout<<setw(5)<<(student+i)->total;
	 cout<<setw(6)<<(student+i)->ave<<"\n";
  }
  getch();
}