//object01.cpp
#include <iostream.h>
#include <conio.h>
class  date						//���O�W��
{ private:						//�p��
  unsigned int year,month,day;
  public:						//����
  void set_date(int _year,int _month,int _day)	//�ۥ~�ɨ��o���
  { year = _year;					//��ƥD��A�N�~���ǤJ����Ƴ]�w��
   month = _month;				//��Ʀ���
   day = _day;
  }
  void list_date()					//�N��ƿ�X
  { cout << "year="<<year<<endl	//��ƥD��A��X��Ʀ���
       << "month="<<month<<endl
       << "day="<<day<<endl;
  }
};
void main()
{ date mybirth;					//����ŧi
  mybirth.set_date(1970,12,5);	//�I�s������ƨöǸ��
  mybirth.list_date();			//�I�s�C�X���
  getch();
}