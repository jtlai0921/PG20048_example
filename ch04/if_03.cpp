//if_03.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char fine;
  cout << "�Ѯ𴸮�(Y/N)?";
  cin >> fine;
  if (fine=='Y' || fine=='y')		//�j�p�g��Y/y�ҥi
    cout <<"�h���C!" << endl;
  else
    cout << "�h�ݹq�v!\n";
  getch();
}
