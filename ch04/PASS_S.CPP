//pass_s.cpp
#include <iostream.h>	//cout
#include <conio.h>	//getch()
void main()
{ short score;
  cout << "Enter (0-100):"; cin >> score;
  if (score>=60)
    cout << "Passed.";
  else
    cout << "Unpassed.";
  cout << endl;
//  (score>=60)?cout << "Passed." :cout << "Unpassed.";
  getch();
}
