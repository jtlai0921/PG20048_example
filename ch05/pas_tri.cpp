//pas_tri.cpp
#include <iostream.h>	//cout
#include <conio.h>	//getch()
const N=7;
void main()
{ int a[N][N]={0},i,j;
  cout << "�]�w�Ĥ@��ȧ���1:\n";
  for (i=0;i<N;i++)
  a[i][0]=1;
  //��X
  for (i=0;i<N;i++)
  { for (j=0;j<N;j++)
    cout << a[i][j]<<' ';
    cout << endl;
  }
  //�B�z�U������
  for (i=1;i<N;i++)
  for (j=1;j<N;j++)
  a[i][j]=a[i-1][j-1]+a[i-1][j];
  cout << "\n�}�C���Ȧp�U:\n";
  for (i=0;i<N;i++)
  { for (j=0;j<N;j++)
    { cout.width(3);
      cout << a[i][j];
    }
    cout << endl;
  }
  cout<<"\n��X��pascal�T���Φp�U:\n";
  for (i=0;i<N;i++)
  { cout.width(2*(N-i));
    for (j=0;j<N;j++)
    if (a[i][j]!=0)
    { cout << a[i][j];
      cout.width(4);
    }
    cout << endl;
  }
  getch();
}