//nine_sq.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short i=1,j;
  cout << "x|  1  2  3  4  5  6  7  8  9\n";
  cout << "-+---------------------------\n";
  while (i<=9)				//�~�j��
  { j=1;						//������
    cout << i << '|';
    while (j<=9)			//���j��
    { cout.width(3);
      cout << i*j;  		//�ۭ�
      j++;					//����j�������
    }
    i++;						//�~��i�������
    cout << endl;
  }
  getch();
}    