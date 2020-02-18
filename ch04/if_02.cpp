//if_02.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ float a,b,x;
  cout << "輸入a,b=";
  cin >> a >> b;
  if (a!=0)
  { x=-b/a;				//多敘述
    cout <<"x植為 " << x << endl;
  }
  if (a==0)
  cout << "對不起,a值不能為0\n";
  getch();
}
