//sort_3.cpp
#include <iostream.h> 	//cout
#include <conio.h>		//getch()
void main()
{ short a,b,c,tem;
  cout << "��Ja,b,c="; cin >> a >> b >> c;
  cout << "�Ƨǫe:" << a << ',' << b << ',' << c << endl;
  if ( a > b )	//�Ya>b�h����
  { tem = a;
    a = b;
    b = tem;
  }
  if (b > c)	//�Yb>c�h����
  { tem = b;
    b = c;
    c = tem;
  }
  if (a > b)	//�Ya>b�h����
  { tem = a;
    a = b;
    b = tem;
  }
  cout << "�Ƨǫ�:" << a << ',' << b << ',' << c << endl;
  getch();
}
