//allo_ptr04.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void swap(int*,int*);
void main()
{ int *a,*b,*c;
  a = new int;				//�t�m�O����
  b = new int;
  c = new int;
  cout << "��Ja,b,c=";
  cin >> *a >> *b >> *c;
  swap(a,b);				//�洫
  swap(b,c);
  swap(a,b);
  cout << "�Ƨǫ�:"<<*a<<" "<<*b<<" "<<*c<<endl;
  delete c;					//����O����
  delete b;
  delete a;
  getch();
}

void swap(int *a,int *b)
{ if (*a>*b)
  { int t = *a;
    *a = *b;
    *b = t;
  }
}