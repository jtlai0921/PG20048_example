//f04.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ int a[5],i;
  float ave=0;
  cout <<"Enter 5 data:\n";
  for (i=0;i<5;i++)
  { cout <<"a["<<i<<"]=";
    cin >> a[i];
    ave +=a[i];		//sum
  }
  ave /= 5;				//average
  cout << "The average is :" << ave << endl;
  getch();
}