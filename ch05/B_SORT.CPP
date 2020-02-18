//b_sort.cpp
#include <iostream.h>
#include <stdlib.h>				//randomize(),random()
#include <conio.h>
const int N=8;
void main()
{ int score[N],j;
  randomize();						//啟動亂數函數產生器
  cout << "排序前資料:\n";
  for (j=0;j<N;j++)
  { score[j] = random(100);	//產生0-99間資料
	 cout << score[j] << " ";
  }
  cout << endl;
  //排序
  for (j=0;j<N-1;j++)
  for (int k=0;k<N-1-j;k++)
  if (score[k]>score[k+1])
  { int t = score[k];			//資料互換
	 score[k] = score[k+1];
	 score[k+1] = t;
  }
  cout << "排序後資料\n";
  for (j=0;j<N;j++)
  cout << score[j] << " ";
  cout << endl;
  getch();                    //暫停
}