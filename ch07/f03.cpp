//f03.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
float cal_mid(float,float);	//prototype
void main()
{ float a,b,mid;
  cout << "Enter a b="; cin >> a >> b;
  mid = cal_mid(a,b);			//call function
  cout << "The data is: " << mid << endl;
  getch();
}
float cal_mid(float a, float b)
{
  return  (2.0 * a * b/(a+b));
}
