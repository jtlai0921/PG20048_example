//matrix_p.cpp
#include <iostream.h>	//cout
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const int M=3;				//�C�j�p
const int N=4;				//��j�p
void main()
{ int a[M][N]={{11,22,33,44},{20,30,40,50},{31,41,51,21}},
      b[M][N]={{10,13,12,11},{22,12,32,42},{35,45,15,51}},
      c[N][M];								//a,b�}�C�]�w���

  int i,j;
  cout << "a �}�C:\n";
   for (i=0;i<M;i++)                //�~�鱱��C
  { for (j=0;j<N;j++)               //����C�L�U�C����
    cout << setw(4) << a[i][j] << ' ';
    cout << endl;                   //���C
  }
  cout << "b �}�C:\n";
   for (i=0;i<M;i++)						//�~�鱱��C
  { for (j=0;j<N;j++)               //����C�L�U�C����
    cout << setw(4) << b[i][j] << ' ';
    cout << endl;                   //���C
  }
  //�}�C�ۥ[
  for (i=0;i<M;i++)
  for (j=0;j<N;j++)
  c[i][j] = a[i][j] + b[i][j];		//�۹露���ۥ[

  cout << "c �}�C:\n";
  for (i=0;i<M;i++)                 //�~�鱱��C
  { for (j=0;j<N;j++)					//����C�L�U�C����
    cout << setw(4) << c[i][j] << ' ';
    cout << endl;                   //���C
  }
  getch();									//�Ȱ�
}