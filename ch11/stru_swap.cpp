//stru_swap.cpp         結構陣列排序
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()

struct rec
{ int chi,eng,math,total;
  float ave;
};

void output_data(rec *,char*);

void main()
{ rec a={80,80,80},b={90,90,90},t;	//a,b設定初值
  a.total = a.chi + a.eng + a.math;	//計算總分
  a.ave = a.total /3.0;					//計算平均
  b.total = b.chi + b.eng + b.math;
  b.ave = b.total /3.0;
  cout <<"互換前:\n";
  output_data(&a,"a");					//輸出
  output_data(&b,"b");
  //互換
  t = a;
  a = b;
  b = t;
  cout <<"互換後:\n";
  output_data(&a,"a");
  output_data(&b,"b");

  getch();
}	//end of main()

//output_data
void output_data(rec *a,char *s)
{ cout << s << "=";
  cout << a->chi;
  cout << " " << a->eng;
  cout << " " << a->math;
  cout << " " << a->total;
  cout << " " << a->ave<<"\n";
}

