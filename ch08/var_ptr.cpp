 //var_ptr.cpp
 #include <iostream.h>
 #include <conio.h>
 void main()
 { int a, *ptr;
  a = 30;
  ptr = &a;									//ptr 指向a之位址
  cout << "a=" << a << endl;
  cout << "*ptr=" << *ptr << endl;
  cout << "a之位址=" << &a << endl;	//輸出16進位
  cout << "ptr之內容=" << ptr << endl;
  cout << "ptr之位址=" << &ptr << endl;
  getch();
 }
