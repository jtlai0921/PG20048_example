//fun_03.cpp
//無參數之函數以return傳回資料
#include <iostream.h>	//cout
#include <conio.h>		//getch()
int getdata();		 		//prototype of function
void line();
void main()
{ int n=getdata();
  for (int i=0;i<n;i++)
  line();
  getch();
}
//function draw line
void line()
{ for (int i=0;i<20;i++)
  cout << "-";
  cout << endl;
}
//function getdata from console
int getdata()
{ int n;
  cout <<"Enter a number n=";
  cin >> n;
  return n;
}
