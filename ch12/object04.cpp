//object04.cpp
#include <iostream.h>
#include <conio.h>
class  Total_Ave
{ private:
   int  a[5],total;
   float  ave;
  public:
    void get_array();
    void list_data();
    int get_max();
    int get_min();
};
void Total_Ave::get_array()
{ total=0;
  cout << "輸入5個資料=";
  for (int n=0;n<5;n++)
  { cin >> a[n];
    total += a[n];
  }
  ave = total /5.0;
}
void Total_Ave::list_data()
{ cout <<"總分="<<total<<endl;
  cout <<"平均="<<ave<<endl;
}
int Total_Ave::get_max()
{ int max=a[0];
  for (int i=1;i<5;i++)
  if (a[i]>max) max = a[i];
  return max;
}
int Total_Ave::get_min()
{ int min=a[0];
  for (int i=1;i<5;i++)
  if (a[i]<min) min = a[i];
  return min;
}
void main()
{ Total_Ave array;	 //物件宣告
  array.get_array();  //呼叫成員函數並輸入資料
  array.list_data();  //輸出資料
  cout <<"最大值="<< array.get_max()<<endl;   //呼叫列出最大值
  cout <<"最小值="<< array.get_min()<<endl;   //呼叫列出最小值
  getch();
}