//stru_ar01.cpp
#include <iostream.h>	//cout,cin
#include <iomanip.h>		//setw()
const int N=5;
struct rec
{ int chi,eng,math,total;
  float ave;
};
void main()
{ rec student[N];			//���c�}�C
  int i;
  for (i=0;i<N;i++)
  { cout <<"��"<<i<<"��chi=";cin >> student[i].chi;
	 cout <<"��"<<i<<"��eng=";cin >> student[i].eng;
	 cout <<"��"<<i<<"��math=";cin >> student[i].math;
  }
  for (i=0;i<N;i++)
  { student[i].total=student[i].chi+student[i].eng+student[i].math;	//�p���`��
	 student[i].ave=student[i].total/3.0;	//�D����
  }
  cout << "�ǥͪ����Z:\n";
  cout <<"��� �^�� �ƾ� �`�� ����\n";	//��X�U������
  for (i=0;i<N;i++)
  { cout<<setw(4)<<student[i].chi;
	 cout<<setw(5)<<student[i].eng;
	 cout<<setw(5)<<student[i].math;
	 cout<<setw(5)<<student[i].total;
	 cout<<setw(8)<<student[i].ave<<"\n";
  }
}