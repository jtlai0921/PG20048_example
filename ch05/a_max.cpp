//a_max.cpp
#include <iostream.h>		//cout
#include <stdlib.h>			//randomize(),random()
#include <conio.h>			//getch()
const int N = 10;				//�}�C�j�p
void main()
{ int r[N],i,max,index=0;
  randomize();					//�_�ʶüƨ�Ʋ��;�
  for (i=0;i<N;i++)
  { *(r+i) = random(100);	//����0-99���üƭ�
    cout << *(r+i) << ' ';	//�C�L��l���
  }
  max = r[0];					//�]�w�̤j�Ȭ��Ĥ@����
  for (i=1;i<10;i++)
  if (*(r+i)>max)				//����C�@������
  { max = *(r+i);				//��max�j�h���N
    index = i;					//�s�̤j�Ȥ����Э�
  }
  cout <<"\n �̤j�Ȭ�:" << max << " ��m=" << index << endl;
  getch();						//�Ȱ�
}