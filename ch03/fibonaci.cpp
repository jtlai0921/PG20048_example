//fibonaci.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getc()
#include <limits.h>		//UINT_MAX =4294967295
void main()
{ unsigned int first,second;
  short count=1;
  first=0;         //第一數為0
  second=1;			 //第二數開始為1
  cout << 0 << " ";
  while (first < ULONG_MAX/2)	//第一數需小於最大值之一半
  { cout << second << " ";
    count++;
    unsigned int third = first + second;	//第三數=第一數加第二數
    first = second;	//第二數變第一數
    second = third;	//第三數變第二數
  }
  cout <<"\n共有: " << count << " 項\n";
  getch();
}