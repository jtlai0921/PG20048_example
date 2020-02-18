//To_Number.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int i,number,n;
  char ch;
  cout <<"块5计じ('0'..'9'):";
  for (i=0,number=0;i<5;i++)
  { cin >> ch;							//弄じ
    n = ch - '0';						//锣计'1'=>1
    number = number * 10 + n;		//锣计
  }
  cout <<"俱计:"
       << number << endl;
  cout <<"计计:"
       << (number*2) << endl;
  getch();
}