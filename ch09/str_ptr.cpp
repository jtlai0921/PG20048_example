//str_ptr.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const short N=16;
void main()
{ unsigned int n;
  char *string;
  string = new char[N];
  cout << "��J�̪�"<<(N-1)<<"�r�����r��:";
  cin >> string;
  cout<<"�Ӧr�ꬰ:"<<string<<endl;
  delete[] string;
  cout <<"��J�һݦr����׭�:";
  cin >> n;
  string = new char[n+1];
  cout << "�b��J�̪�"<<n<<"�r�����r��:";
  cin >> string;
  cout<<"�Ӧr�ꬰ:"<<string<<endl;
  delete[] string;
  getch();
}