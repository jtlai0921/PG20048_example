//str_ChNo.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ char *sentence;
  short n;
  cout <<"�r�����=";
  (cin >> n).get();
  //char ch=(char)(cin>>n).get();
  sentence = new char(n-1);
  cout << "��J�r��=";
  cin.getline(sentence,n);
  cout <<"��J�r�ꬰ "<<sentence<<endl;
  delete sentence;
  getch();
}