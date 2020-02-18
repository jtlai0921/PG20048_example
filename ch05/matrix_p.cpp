//matrix_p.cpp
#include <iostream.h>	//cout
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const int M=3;				//列大小
const int N=4;				//行大小
void main()
{ int a[M][N]={{11,22,33,44},{20,30,40,50},{31,41,51,21}},
      b[M][N]={{10,13,12,11},{22,12,32,42},{35,45,15,51}},
      c[N][M];								//a,b陣列設定初值

  int i,j;
  cout << "a 陣列:\n";
   for (i=0;i<M;i++)                //外圈控制列
  { for (j=0;j<N;j++)               //內圈列印各列元素
    cout << setw(4) << a[i][j] << ' ';
    cout << endl;                   //換列
  }
  cout << "b 陣列:\n";
   for (i=0;i<M;i++)						//外圈控制列
  { for (j=0;j<N;j++)               //內圈列印各列元素
    cout << setw(4) << b[i][j] << ' ';
    cout << endl;                   //換列
  }
  //陣列相加
  for (i=0;i<M;i++)
  for (j=0;j<N;j++)
  c[i][j] = a[i][j] + b[i][j];		//相對元素相加

  cout << "c 陣列:\n";
  for (i=0;i<M;i++)                 //外圈控制列
  { for (j=0;j<N;j++)					//內圈列印各列元素
    cout << setw(4) << c[i][j] << ' ';
    cout << endl;                   //換列
  }
  getch();									//暫停
}