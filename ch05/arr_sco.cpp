//arr_sco.cpp            //檔名
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE = 5;		//利用常數設定陣列大小
void main()
{ int score[SIZE],i,total=0;
  float ave;
  for (i=0;i<SIZE;i++)
  { cout <<"score["<<i<<"]=";
    cin >> score[i];
    total += score[i];	//求和 total = total + score[i];
  }
  ave = float(total)/SIZE;	//求平均對total作型別轉換
  for (i=0;i<SIZE;i++)
  cout<<score[i]<<" ";
  cout <<"\ntotal="<<total<<"\nave="<<ave;
  getch();
}