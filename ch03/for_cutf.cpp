//for_cutf.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int days=0;
  float length=100.0;
  for (;length>0.1;)	//�@�Ѥ@�b
  { days++;
    length /=2.0;
  }
  cout << days << "�Ѱŧ�" << endl;
  getch();
}