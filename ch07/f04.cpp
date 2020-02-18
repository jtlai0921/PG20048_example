//f04.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ int a[10],i;
  float ave=0;
  cout <<"Enter 10 data:\n";
  for (i=0;i<10;i++)
  { cout <<"["<<i<<"]=";
    cin >> a[i];
    ave +=a[i];	//sum
  }
  ave /= 10;		//average
  cout << "The average is :" << ave << endl;
  getch();
}