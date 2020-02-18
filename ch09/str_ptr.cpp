//str_ptr.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const short N=16;
void main()
{ unsigned int n;
  char *string;
  string = new char[N];
  cout << "輸入最長"<<(N-1)<<"字元之字串:";
  cin >> string;
  cout<<"該字串為:"<<string<<endl;
  delete[] string;
  cout <<"輸入所需字串長度值:";
  cin >> n;
  string = new char[n+1];
  cout << "在輸入最長"<<n<<"字元之字串:";
  cin >> string;
  cout<<"該字串為:"<<string<<endl;
  delete[] string;
  getch();
}