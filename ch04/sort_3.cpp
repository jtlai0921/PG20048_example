//sort_3.cpp
#include <iostream.h> 	//cout
#include <conio.h>		//getch()
void main()
{ short a,b,c,tem;
  cout << "輸入a,b,c="; cin >> a >> b >> c;
  cout << "排序前:" << a << ',' << b << ',' << c << endl;
  if ( a > b )	//若a>b則互換
  { tem = a;
    a = b;
    b = tem;
  }
  if (b > c)	//若b>c則互換
  { tem = b;
    b = c;
    c = tem;
  }
  if (a > b)	//若a>b則互換
  { tem = a;
    a = b;
    b = tem;
  }
  cout << "排序後:" << a << ',' << b << ',' << c << endl;
  getch();
}
