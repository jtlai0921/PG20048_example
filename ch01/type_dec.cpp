//type_dec.cpp		檔案名稱
#include <iostream.h>	//cout
#include <conio.h>	//getch()
void main()
{ int x=4,y=5;			//整數變數宣告並設初值
  char ch='A',letter='0';	//字元變數宣告並設初值
  float radius =11.2, area=0;//浮點數變數宣告並設初值
  cout << "x=" << x << ",y=" <<y << endl;	//輸出各變數資料
  cout << "ch=" << ch << ",letter=" << letter << endl;
  cout << "radius=" << radius << ",area=" << area << endl;
  int unknown;			//宣告未設初值之變數
  cout << "unknown=" << unknown << endl;	//輸出結果將未定
  getch();				//暫停
}
