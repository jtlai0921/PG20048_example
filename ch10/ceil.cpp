//ceil.cpp
#include <math.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  double number = 123.54,num=-123.54;
  double down, up,num_down,num_up;
  down = floor(number);
  num_down = floor(num);
  up = ceil(number);
  num_up = ceil(num);
  cout<<"正數:"<<number<<endl
      <<"floor後:"<<down<<endl
      <<"ceil後:"<<up << endl;
  cout<<"負數:"<<num<<endl
      <<"floor後:"<<num_down<<endl
      <<"ceil後:"<<num_up << endl;
  getch();
 }
