 //var_ptr.cpp
 #include <iostream.h>
 #include <conio.h>
 void main()
 { int a, *ptr;
  a = 30;
  ptr = &a;									//ptr ���Va����}
  cout << "a=" << a << endl;
  cout << "*ptr=" << *ptr << endl;
  cout << "a����}=" << &a << endl;	//��X16�i��
  cout << "ptr�����e=" << ptr << endl;
  cout << "ptr����}=" << &ptr << endl;
  getch();
 }
