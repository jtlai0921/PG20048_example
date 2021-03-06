//pay_abc.cpp
#include <iostream.h>				//cout,cin
#include <conio.h>					//getch()
#include <iomanip.h>					//setw()
const int R=3;							//列(row)大小
const int C=3;							//行(column)大小
void main()
{ int pay[R+1][C+1]={0};			//定義陣列並設定初值全部為0
  char ch;								//方便轉為字元
  for (int j=0;j<R;j++)
  { ch=j+'A';							//或 ch=j+65;
    for (int k=0;k<C;k++)
    { cout << ch << " 第" << k+1 <<"月=";
      cin >> pay[j][k];
    }
  }
  for (int j=0;j<R;j++)
  for (int k=0;k<C;k++)
  { pay[j][R] += pay[j][k];		//每人三月總花費
    pay[C][j] += pay[k][j];		//每月三人總花費
    pay[R][C] += pay[j][k];		//全部三人三月總花費
  }
  cout << "學 --------月份---------------\n";
  cout << "生 [月一] [月二] [月三] [總和]\n";
  for (int j=0;j<R+1;j++)
  { if (j!=R)
    ch = j+65;
    else ch =' ';						//最後一列為每月花費和
    cout << ch << "  ";				//列印學生A,B,C字元
    for (int k=0;k<C+1;k++)
    cout << setw(6) << pay[j][k]<< ' ';
    cout << endl;						//換列
  }
  getch();
}