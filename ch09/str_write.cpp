//str_write.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ char *string;;

  string = new char[21];
  cout << "日月潭英文名為:";
  cin.getline(string,21); 	//可輸入含空白之字串
  string[3]='\0';
  cout << string<<endl; 	//輸出遇到'\0'就停止
  cout.write(string,21);	//不因'\0'而停止
  cout << endl;
  getch();
}