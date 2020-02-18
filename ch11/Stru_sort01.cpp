//stru_sort01.cpp         結構陣列排序
#include <iostream.h>	//cout,cin
#include <stdlib.h>		//random()
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const short N=10;
struct rec
{ short seat;		//座號
  int chi,eng,math,total;
  float ave;
  short rank;		//名次
};

void main()
{ rec student[10];
  short i,j;
  for (i=0;i<N;i++)
  { (student+i)->seat=i+1;			//指標方式
    student[i].chi=random(101);	//亂數分數
	 (student+i)->eng=random(101);
	 (student+i)->math=random(101);
    (student+i)->total=(student+i)->chi+(student+i)->eng+(student+i)->math;
	 (student+i)->ave=(student+i)->total/3.0;	//求平均
    student[i].rank = 0;
  }
  cout << "學生的成績(排序前):\n";
  cout <<"座號 國文 英文 數學 總分 平均\n";	//輸出各欄位分數
  for (i=0;i<N;i++)
  { cout<<setw(3)<<student[i].seat;
    cout<<setw(5)<<(student+i)->chi;
	 cout<<setw(5)<<(student+i)->eng;
	 cout<<setw(5)<<(student+i)->math;
	 cout<<setw(5)<<(student+i)->total;
	 cout<<setw(8)<<(student+i)->ave<<"\n";
  }
  //依總分total排序由大到小
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].total < student[j+1].total)
  { rec t;
    t = student[j];
    student[j] = student[j+1];
    student[j+1] = t;
  }
  //寫名次1,2,3,...10 到rank欄位
  for (i=0;i<N;i++)
  student[i].rank = i+1;
  //依座號seat排序由小到大
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].seat > student[j+1].seat)
  { rec t;
    t = student[j];
    student[j] = student[j+1];
    student[j+1] = t;
  }
  cout << "學生的成績(排序後):\n";
  cout <<"------------------------------------\n";
  cout <<"座號 國文 英文 數學 總分 平均   名次\n";	//輸出各欄位分數
  cout <<"====================================\n";
  for (i=0;i<N;i++)
  { cout<<setw(3)<<student[i].seat;
    cout<<setw(5)<<(student+i)->chi;
	 cout<<setw(5)<<(student+i)->eng;
	 cout<<setw(5)<<(student+i)->math;
	 cout<<setw(5)<<(student+i)->total;
	 cout<<setw(8)<<(student+i)->ave;
    cout<<setw(5)<<(student+i)->rank<<"\n";
  }
  cout <<"==================================\n";
  getch();
}