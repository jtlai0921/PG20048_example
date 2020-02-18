//file_r01.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ int n;
  char ch;
  fstream file;
  file.open("random.dat",ios::app|ios::in|ios::out|ios::binary);
  do
  { cout << "Enter a number:"; cin >> n;
    file.write((char*)&n,sizeof(n));	//寫入檔尾
    cout << "Enter another(Y/N)?"; cin >> ch;
  } while ((ch=='y')||(ch=='Y'));

  file.seekg(0);		//設定到檔頭
  file.read((char*)&n,sizeof(n));
  while (!file.eof())	//EOF就結束
  { cout << n << ",";
    file.read((char*)&n,sizeof(n));	//讀取資料
  }
  cout << endl;
  getch();
}