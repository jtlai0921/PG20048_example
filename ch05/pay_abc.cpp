//pay_abc.cpp
#include <iostream.h>				//cout,cin
#include <conio.h>					//getch()
#include <iomanip.h>					//setw()
const int R=3;							//�C(row)�j�p
const int C=3;							//��(column)�j�p
void main()
{ int pay[R+1][C+1]={0};			//�w�q�}�C�ó]�w��ȥ�����0
  char ch;								//��K�ର�r��
  for (int j=0;j<R;j++)
  { ch=j+'A';							//�� ch=j+65;
    for (int k=0;k<C;k++)
    { cout << ch << " ��" << k+1 <<"��=";
      cin >> pay[j][k];
    }
  }
  for (int j=0;j<R;j++)
  for (int k=0;k<C;k++)
  { pay[j][R] += pay[j][k];		//�C�H�T���`��O
    pay[C][j] += pay[k][j];		//�C��T�H�`��O
    pay[R][C] += pay[j][k];		//�����T�H�T���`��O
  }
  cout << "�� --------���---------------\n";
  cout << "�� [��@] [��G] [��T] [�`�M]\n";
  for (int j=0;j<R+1;j++)
  { if (j!=R)
    ch = j+65;
    else ch =' ';						//�̫�@�C���C���O�M
    cout << ch << "  ";				//�C�L�ǥ�A,B,C�r��
    for (int k=0;k<C+1;k++)
    cout << setw(6) << pay[j][k]<< ' ';
    cout << endl;						//���C
  }
  getch();
}