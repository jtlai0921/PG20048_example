//dim2_0.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
#include <stdlib.h>		//randomize(),random()
const int ROW=3;
const int COLUMN =4;
void main()
{ int a[ROW][COLUMN],i,j;
  //randomize()
  for (i=0;i<ROW;i++)
  for (j=0;j<COLUMN;j++)
  a[i][j]=random(100);
    cout << "�U���������Ц���X:\n";
  for (i=0;i<ROW;i++)
  { cout << "  i  j\n";
    for (j=0;j<COLUMN;j++)
    { cout <<"a["<<i<<"]["<<j<<"]=";
      cout.width(3);
      cout<< a[i][j] << endl;
    }
    cout << endl;
  }
  cout << "��C����X:\n";
  cout << "    0  1  2  3\n";
  for (i=0;i<ROW;i++)
  { cout << i << ' ';
    for (j=0;j<COLUMN;j++)
    { cout.width(3);
      cout<< a[i][j];
    }
    cout << endl;
  }
  cout << "�����N���~��....";getch();
}