//stru_sort01.cpp         ���c�}�C�Ƨ�
#include <iostream.h>	//cout,cin
#include <stdlib.h>		//random()
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const short N=10;
struct rec
{ short seat;		//�y��
  int chi,eng,math,total;
  float ave;
  short rank;		//�W��
};

void main()
{ rec student[10];
  short i,j;
  for (i=0;i<N;i++)
  { (student+i)->seat=i+1;			//���Ф覡
    student[i].chi=random(101);	//�üƤ���
	 (student+i)->eng=random(101);
	 (student+i)->math=random(101);
    (student+i)->total=(student+i)->chi+(student+i)->eng+(student+i)->math;
	 (student+i)->ave=(student+i)->total/3.0;	//�D����
    student[i].rank = 0;
  }
  cout << "�ǥͪ����Z(�Ƨǫe):\n";
  cout <<"�y�� ��� �^�� �ƾ� �`�� ����\n";	//��X�U������
  for (i=0;i<N;i++)
  { cout<<setw(3)<<student[i].seat;
    cout<<setw(5)<<(student+i)->chi;
	 cout<<setw(5)<<(student+i)->eng;
	 cout<<setw(5)<<(student+i)->math;
	 cout<<setw(5)<<(student+i)->total;
	 cout<<setw(8)<<(student+i)->ave<<"\n";
  }
  //���`��total�ƧǥѤj��p
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].total < student[j+1].total)
  { rec t;
    t = student[j];
    student[j] = student[j+1];
    student[j+1] = t;
  }
  //�g�W��1,2,3,...10 ��rank���
  for (i=0;i<N;i++)
  student[i].rank = i+1;
  //�̮y��seat�ƧǥѤp��j
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].seat > student[j+1].seat)
  { rec t;
    t = student[j];
    student[j] = student[j+1];
    student[j+1] = t;
  }
  cout << "�ǥͪ����Z(�Ƨǫ�):\n";
  cout <<"------------------------------------\n";
  cout <<"�y�� ��� �^�� �ƾ� �`�� ����   �W��\n";	//��X�U������
  cout <<"====================================\n";
  for (i=0;i<N;i++)
  { cout<<setw(3)<<student[i].seat;
    cout<<setw(5)<<(student+i)->chi;
	 cout<<setw(5)<<(student+i)->eng;
	 cout<<setw(5)<<(student+i)->math;
	 cout<<setw(5)<<(student+i)->total;
	 cout<<setw(8)<<(student+i)->ave;
    cout<<setw(5)<<(student+i)->rank<<"\n";
  }
  cout <<"==================================\n";
  getch();
}