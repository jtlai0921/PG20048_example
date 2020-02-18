//stru_ar01.cpp
#include <iostream.h>	//cout,cin
#include <iomanip.h>		//setw()
const int N=5;
struct rec
{ int chi,eng,math,total;
  float ave;
};
void main()
{ rec student[N];			//結構陣列
  int i;
  for (i=0;i<N;i++)
  { cout <<"第"<<i<<"位chi=";cin >> student[i].chi;
	 cout <<"第"<<i<<"位eng=";cin >> student[i].eng;
	 cout <<"第"<<i<<"位math=";cin >> student[i].math;
  }
  for (i=0;i<N;i++)
  { student[i].total=student[i].chi+student[i].eng+student[i].math;	//計算總分
	 student[i].ave=student[i].total/3.0;	//求平均
  }
  cout << "學生的成績:\n";
  cout <<"國文 英文 數學 總分 平均\n";	//輸出各欄位分數
  for (i=0;i<N;i++)
  { cout<<setw(4)<<student[i].chi;
	 cout<<setw(5)<<student[i].eng;
	 cout<<setw(5)<<student[i].math;
	 cout<<setw(5)<<student[i].total;
	 cout<<setw(8)<<student[i].ave<<"\n";
  }
}