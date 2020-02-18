//sizeof.cpp
#include <iostream.h>
#include <stdlib.h>	//random()
#include <iomanip.h>	//setw()
#include <string.h>	//strcpy()
#include <conio.h>
class  Record
{ private:
   char  name[10];
   int seat;
   int score[3],total;
   float ave;
  public:
   Record(char *,int);					//有參數之建構子
   void list_Record();
   ~Record(){};                 	//解構子
};
Record::Record(char *s,int _seat)			  	//建構子定義
{ strcpy(name,s);      				//清除資料
  seat=_seat;
  total = 0;
  for (int i=0;i<3;i++)
  { score[i]=random(101);
    total += score[i];
  }
  ave=total/3.0;
}

void Record::list_Record()
{ cout << setw(3)<< seat << setw(10) << name;
  for (int i=0;i<3;i++)
  cout << setw(3)<< score[i];
  cout << setw(4) << total
       << setw(6) << ave << endl;
}
void main()
{ Record Bill("Bill",1),Gates("Gates",2);	 	  //物件宣告
  cout << "類別大小:"<<sizeof(Record)<< " Bytes\n";
  Bill.list_Record();
  Gates.list_Record();
  getch();
}