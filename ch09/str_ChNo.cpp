//str_ChNo.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ char *sentence;
  short n;
  cout <<"字串長度=";
  (cin >> n).get();
  //char ch=(char)(cin>>n).get();
  sentence = new char(n-1);
  cout << "輸入字串=";
  cin.getline(sentence,n);
  cout <<"輸入字串為 "<<sentence<<endl;
  delete sentence;
  getch();
}