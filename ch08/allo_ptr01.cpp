//allo_ptr01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *a,*b,c;
  a= new int(1);	//���t�Ŷ�
  b= new int(1);
  cout << "a����}="<<a<<endl;	//0x00672d54
  cout << "b����}="<<b<<endl;	//0x00672d64
  cout << "c����}="<<&c<<endl;	//0x0064fe00
  cout << "��Ja,b=";
  cin >> *a >> *b;
  c = *a + *b;
  cout <<"c=" << c << endl;
  delete a;		//��^���t���O����
  delete b;
  getch();
}
