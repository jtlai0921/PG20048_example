//allo_ptr01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *a,*b,c;
  a= new int(1);	//分配空間
  b= new int(1);
  cout << "a之位址="<<a<<endl;	//0x00672d54
  cout << "b之位址="<<b<<endl;	//0x00672d64
  cout << "c之位址="<<&c<<endl;	//0x0064fe00
  cout << "輸入a,b=";
  cin >> *a >> *b;
  c = *a + *b;
  cout <<"c=" << c << endl;
  delete a;		//交回分配之記憶體
  delete b;
  getch();
}
