//b_sort.cpp
#include <iostream.h>
#include <stdlib.h>				//randomize(),random()
#include <conio.h>
const int N=8;
void main()
{ int score[N],j;
  randomize();						//�Ұʶüƨ�Ʋ��;�
  cout << "�Ƨǫe���:\n";
  for (j=0;j<N;j++)
  { score[j] = random(100);	//����0-99�����
	 cout << score[j] << " ";
  }
  cout << endl;
  //�Ƨ�
  for (j=0;j<N-1;j++)
  for (int k=0;k<N-1-j;k++)
  if (score[k]>score[k+1])
  { int t = score[k];			//��Ƥ���
	 score[k] = score[k+1];
	 score[k+1] = t;
  }
  cout << "�Ƨǫ���\n";
  for (j=0;j<N;j++)
  cout << score[j] << " ";
  cout << endl;
  getch();                    //�Ȱ�
}