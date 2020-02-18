//nine_sq.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short i=1,j;
  cout << "x|  1  2  3  4  5  6  7  8  9\n";
  cout << "-+---------------------------\n";
  while (i<=9)				//外迴圈
  { j=1;						//內圈初值
    cout << i << '|';
    while (j<=9)			//內迴圈
    { cout.width(3);
      cout << i*j;  		//相乘
      j++;					//內圈j條件改變
    }
    i++;						//外圈i條件改變
    cout << endl;
  }
  getch();
}    