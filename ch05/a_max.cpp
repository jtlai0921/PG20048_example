//a_max.cpp
#include <iostream.h>		//cout
#include <stdlib.h>			//randomize(),random()
#include <conio.h>			//getch()
const int N = 10;				//陣列大小
void main()
{ int r[N],i,max,index=0;
  randomize();					//起動亂數函數產生器
  for (i=0;i<N;i++)
  { *(r+i) = random(100);	//產生0-99之亂數值
    cout << *(r+i) << ' ';	//列印原始資料
  }
  max = r[0];					//設定最大值為第一元素
  for (i=1;i<10;i++)
  if (*(r+i)>max)				//比較每一元素值
  { max = *(r+i);				//比max大則取代
    index = i;					//存最大值之註標值
  }
  cout <<"\n 最大值為:" << max << " 位置=" << index << endl;
  getch();						//暫停
}