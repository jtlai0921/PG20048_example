//object01.cpp
#include <iostream.h>
#include <conio.h>
class  date						//類別名稱
{ private:						//私有
  unsigned int year,month,day;
  public:						//公有
  void set_date(int _year,int _month,int _day)	//自外界取得資料
  { year = _year;					//函數主體，將外部傳入之資料設定給
   month = _month;				//資料成員
   day = _day;
  }
  void list_date()					//將資料輸出
  { cout << "year="<<year<<endl	//函數主體，輸出資料成員
       << "month="<<month<<endl
       << "day="<<day<<endl;
  }
};
void main()
{ date mybirth;					//物件宣告
  mybirth.set_date(1970,12,5);	//呼叫成員函數並傳資料
  mybirth.list_date();			//呼叫列出資料
  getch();
}