//str_cpy1.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *source="America apologize!",*destination;
  int len;
  len = strlen(source)+1;			//取得字串長度加1
  destination = new char[len];	//配置記憶體
  strcpy(destination,source);		//拷貝字串
  cout << "用strcpy()全部拷貝後字串為:"
		 << destination << endl;
  strcpy(destination,"");			//清除字串
  cout << "用strcpy()清除字串後:"
		 << destination << endl;
  stpcpy(destination,source);		//拷貝字串
  cout << "用stpcpy()全部拷貝後字串為:"
		 << destination << endl;
  stpcpy(destination,"");			//清除字串
  cout << "用stpcpy()清除字串後:"
		 << destination << endl;
  strncpy(destination,source,7);	//拷貝部份字串
  destination[7]='\0';				//加上結尾
  cout << "用strncpy()拷貝部份後字串為:"
		 << destination << endl;
  destination[0]='\0';
  cout << "用\\0清除字串後:"
		 << destination << endl;
  cout<<(destination+1);
  delete[] destination;
  getch();
}