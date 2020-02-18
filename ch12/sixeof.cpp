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
   Record(char *,int);					//���ѼƤ��غc�l
   void list_Record();
   ~Record(){};                 	//�Ѻc�l
};
Record::Record(char *s,int _seat)			  	//�غc�l�w�q
{ strcpy(name,s);      				//�M�����
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
{ Record Bill("Bill",1),Gates("Gates",2);	 	  //����ŧi
  cout << "���O�j�p:"<<sizeof(Record)<< " Bytes\n";
  Bill.list_Record();
  Gates.list_Record();
  getch();
}