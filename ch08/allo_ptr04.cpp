//allo_ptr04.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void swap(int*,int*);
void main()
{ int *a,*b,*c;
  a = new int;				//配置記憶體
  b = new int;
  c = new int;
  cout << "輸入a,b,c=";
  cin >> *a >> *b >> *c;
  swap(a,b);				//交換
  swap(b,c);
  swap(a,b);
  cout << "排序後:"<<*a<<" "<<*b<<" "<<*c<<endl;
  delete c;					//釋放記憶體
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