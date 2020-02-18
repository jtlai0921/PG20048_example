//stru_sort02.cpp         結構陣列排序
#include <iostream.h>	//cout,cin
#include <stdlib.h>		//random()
#include <string.h>		//strlen()
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()

const short N=10;
const char *title="座號 國文 英文 數學 總分 平均   名次\n";

struct rec
{ short seat;		//座號
  int chi,eng,math,total;
  float ave;
  short rank;		//名次
};

//prototype
void get_data(rec*,int);	//取得資料
void list_line(int,char);	//輸出分隔線
void list_title(char*);		//輸出標題
void output_data(rec*);		//指標傳遞
void swap_rec(rec&, rec&);	//位址別名

void main()
{ rec student[10];
  short i,j;
  for (i=0;i<N;i++)
  get_data(&student[i],i);				//呼叫函數取得資料

  //列印排序前資料
  list_title("前):\n"); 				//列印標題
  for (i=0;i<N;i++)
  output_data(&student[i]);			//輸出陣列
  list_line(strlen(title)-1,'=');	//輸出底線
  cout <<"\n";

  //依總分total排序由大到小
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].total < student[j+1].total)
  swap_rec(student[j],student[j+1]);	//交換結構

  //寫名次1,2,3,...10 到rank欄位
  for (i=0;i<N;i++)
  student[i].rank = i+1;

  //依座號seat排序由小到大
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].seat > student[j+1].seat)
  swap_rec(student[j],student[j+1]);	//交換結構

  //列印排序後資料
  list_title("後):\n");
  for (i=0;i<N;i++)
  output_data(&student[i]);
  list_line(strlen(title)-1,'=');
  cout <<"\n";

  getch();
}	//end of main()

//get_data
void get_data(rec *a,int i)
{ a->seat=i+1;				//指標方式
  a->chi=random(101);	//亂數分數
  a->eng=random(101);
  a->math=random(101);
  a->total=a->chi+a->eng+a->math;	//總分
  a->ave=a->total/3.0;	//求平均
  a->rank = 0;				//名次
 }

//list_line
void list_line(int n,char ch)
{ for (int i=0;i<n;i++)
  cout << ch;				//輸出字元
  cout << endl;
}

//list_title
void list_title(char *str)
{
  cout << "學生的成績(排序"<<str;
  list_line(strlen(title)-1,'-');
  cout <<title;			//輸出各欄位名稱
  list_line(strlen(title)-1,'=');
}

//output_data
void output_data(rec *a)
{ cout << setw(3) << a->seat;
  cout << setw(5) << a->chi;
  cout << setw(5) << a->eng;
  cout << setw(5) << a->math;
  cout << setw(5) << a->total;
  cout << setw(8) << a->ave;
  cout << setw(5) << a->rank<<"\n";
}

//swap_rec
void swap_rec(rec &a, rec &b)
{ rec t;
  t = a;				//互換結構
  a = b;
  b = t;
}