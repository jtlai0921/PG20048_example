//file_r02.cpp
#include <fstream.h>
#include <conio.h>	//getch()
void main()
{ int data,n, filesize;
  char ch;
  ifstream infile;
  infile.open("random.dat",ios::in|ios::out|ios::binary);
  infile.seekg(0,ios::end);		//設定到檔尾
  filesize = infile.tellg();		//求檔案大小或目前位置
  cout << "目前有 " << filesize / sizeof(int) << " 筆資料\n";
  do
  { cout << "輸入欲讀取第幾筆:"; cin >> n;
    if ((n>0) && (n<= filesize / sizeof(int)))
    { int position = (n-1)*sizeof(int);
      cout << "position=" << position << endl;
      infile.seekg(position);
      infile.read((char*)&data,sizeof(int));
      cout << data << endl;
    }
    cout << "再輸入嗎(Y/N)?"; cin >> ch;
  }while ((ch=='y')||(ch=='Y'));

  cout << "檔案資料如下:\n";
  infile.seekg(0);
  infile.read((char*)&data,sizeof(int));	//讀取資料
  while (!infile.eof())	//EOF就結束
  { cout << data << ",";
    infile.read((char*)&data,sizeof(int));	//讀取資料
  }
  cout << endl;
  getch();
}
