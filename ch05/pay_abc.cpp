//pay_abc.cpp
#include <iostream.h>				//cout,cin
#include <conio.h>					//getch()
#include <iomanip.h>					//setw()
const int R=3;							//(row)
const int C=3;							//︽(column)
void main()
{ int pay[R+1][C+1]={0};			//﹚竡皚砞﹚场0
  char ch;								//よ獽锣じ
  for (int j=0;j<R;j++)
  { ch=j+'A';							//┪ ch=j+65;
    for (int k=0;k<C;k++)
    { cout << ch << " 材" << k+1 <<"る=";
      cin >> pay[j][k];
    }
  }
  for (int j=0;j<R;j++)
  for (int k=0;k<C;k++)
  { pay[j][R] += pay[j][k];		//–る羆禣
    pay[C][j] += pay[k][j];		//–る羆禣
    pay[R][C] += pay[j][k];		//场る羆禣
  }
  cout << "厩 --------る---------------\n";
  cout << "ネ [る] [る] [る] [羆㎝]\n";
  for (int j=0;j<R+1;j++)
  { if (j!=R)
    ch = j+65;
    else ch =' ';						//程–る禣㎝
    cout << ch << "  ";				//厩ネA,B,Cじ
    for (int k=0;k<C+1;k++)
    cout << setw(6) << pay[j][k]<< ' ';
    cout << endl;						//传
  }
  getch();
}