//stru_ptr02.cpp
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//�쫬�ŧi
void main()
{ rec *Bill;
  Bill= new rec;				//�t�m�O����
  Bill->chi = random(100); //���ͶüƤ���64,78,40,164,54.6667
  (*Bill).eng = random(100);//�t�@�ث��Ф覡
  Bill->math = random(100);
  Bill->total=Bill->chi + Bill->eng + Bill->math;
  Bill->ave = Bill->total /3.0;//����
  cout <<"Bill�����Z:";
  cout <<"\n���=" << Bill->chi;	//��X�U������
  cout <<"\n�^��=" << Bill->eng;
  cout <<"\n�ƾ�=" << Bill->math;
  cout <<"\n�`��=" << Bill->total;
  cout <<"\n����=" << Bill->ave <<"\n";
  delete Bill;						//����O����
  getch();
}
