//dim3_0.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
const int R=3;
const int C=4;
const int D=3;
void main()
{ int a[R][C][D],i,j,k;
  for (i=0;i<R;i++)
  for (j=0;j<C;j++)
  for (k=0;k<D;k++)
  a[i][j][k]=i+j+k;
  for (i=0;i<R;i++)
  { cout << "��" << i << "�C:\n";
    cout << "  i  j  k        i  j  k        i  j  k\n";  
    for (j=0;j<C;j++)
    { for (k=0;k<D;k++)
      { cout << "a["<<i<<"]["<<j<<"]["<<k<<"]=";
        cout.width(3);
        cout << a[i][j][k]<<' ';
      }
      cout << endl;
    }
  }
  cout << "�����N���~��....";getch();
  for (k=0;k<D;k++)
  { cout << "\n��" << k << "�`:\n";
    cout << "  i  j  k        i  j  k        i  j  k\n";
    for (j=0;j<C;j++)
    { for (i=0;i<R;i++)
      { cout << "a["<<i<<"]["<<j<<"]["<<k<<"]=";
        cout.width(3);
        cout << a[i][j][k]<<' ';
      }
      cout << endl;
    }
  }
  cout << "�����N���~��....";getch();
  for (j=0;j<C;j++)
  { cout << "\n��" << j << "��:\n";
    cout << "  i  j  k        i  j  k        i  j  k\n";
    for (i=0;i<R;i++)
    { for (k=0;k<D;k++)
      { cout << "a["<<i<<"]["<<j<<"]["<<k<<"]=";
        cout.width(3);
        cout << a[i][j][k]<<' ';
      }
      cout << endl;
    }
  }
  cout << "�����N���~��....\n";
  getch();
}