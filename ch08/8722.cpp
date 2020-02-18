//8722.cpp
#include <iostream.h>
#include <conio.h>
struct rec
{ char name[20];
  char sex;
  int age;
};

void getdata(rec *);

void main()
{ rec Bill;
  getdata(&Bill);
  cout << "Data as below:";
  cout << "\nname=" << Bill.name;
  cout << "\nsex=" << Bill.sex;
  cout << "\nage=" << Bill.age;
  getch();
}
// getdata
void getdata(rec *a)
{ cout << "name="; cin >> a->name;
  cout << "sex="; cin >> a->sex;
  cout << "age="; cin >> a->age;
}  
