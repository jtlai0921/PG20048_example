//str_2av.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *s[4],*string;
  int i;
  string = new char[21];
  for (i=0;i<4;i++)
  { cout <<"輸入4筆字串(每筆最長20字元)第"<<i<<"筆:";
    cin >> string;			//佔勿輸入空白
    if (strlen(string)<=20)
    { s[i] = new char[strlen(string)+1];
      strcpy(s[i],string);
    }
    else i--;
  }
  cout << "輸入之字串如下:\n";
  for (i=0;i<4;i++)
  { cout << s[i] << ' ';
    delete[] s[i];
  }
  cout << endl;
  delete [] string;
  getch();
}