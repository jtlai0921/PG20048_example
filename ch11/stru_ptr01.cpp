//stru_ptr01.cpp
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//�쫬�ŧi
void main()
{ rec *Bill,a;
  Bill= &a;						//���V�w�s�b�����c
  Bill->chi = random(100); //���ͶüƤ���64,78,40,164,54.6667
  (*Bill).eng = random(100);//�t�@�ث��Ф覡
  Bill->math = random(100);
  Bill->total=Bill->chi + Bill->eng + Bill->math;
  Bill->ave = Bill->total /3.0;//����
  cout <<"Bill�����Z:";
  cout <<"\n���=" << a.chi;	//��X�U������
  cout <<"\n�^��=" << Bill->eng;
  cout <<"\n�ƾ�=" << Bill->math;
  cout <<"\n�`��=" << a.total;
  cout <<"\n����=" << Bill->ave <<"\n";
  getch();
}
