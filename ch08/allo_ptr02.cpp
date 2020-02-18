//allo_ptr02.cpp			指標陣列
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()

void main()
{ int *a,size,i;
  cout <<"輸入陣列大小:";
  cin >> size;
  a = new int(size);			//分配記憶體
  for (i=0;i<size;i++)
  { cout <<i<<":"<< (a++) <<"=";	//輸出位址
    cin >> *(a++);			//輸入資料
  }
  delete a;						//釋放記憶體
  getch();
}