//do9_sq.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short i=9,j;
  cout << "x|  1  2  3  4  5  6  7  8  9\n";
  cout << "-+---------------------------\n";
  do			 				//�~�j��
  { j=1;						//������
    cout << i << '|';
    do						//���j��
    { cout.width(3);
      cout << i*j;  		//�ۭ�
      j++;					//����j�������
    }while (j<=i);
    i--;						//�~��i�������
    cout << endl;
  }while (i>=1);
  getch();
}    