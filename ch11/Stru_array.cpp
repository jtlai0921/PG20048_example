//stru_array.cpp
#include <iostream.h>
#include <conio.h>
struct rec
{ int score[3],total;
  float ave;
};
void main()
{ rec Bill;
  Bill.score[0] = 80;
  Bill.score[1] = 90;
  Bill.score[2] = 70;
  Bill.total=0;
  for (int n=0;n<3;n++)
  Bill.total+=Bill.score[n];	//�p���`��
  Bill.ave=Bill.total/3.0;	//�D����
  cout << "Bill�����Z:\n";
  cout <<"\n���="<<Bill.score[0];	//��X�U������
  cout <<"\n�^��="<<Bill.score[1];
  cout <<"\n�ƾ�="<<Bill.score[2];
  cout <<"\n�`��="<<Bill.total;
  cout <<"\n����="<<Bill.ave<<"\n";
  getch();
}