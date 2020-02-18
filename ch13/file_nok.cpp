//file_nok.cpp
#include <fstream.h>
#include <iomanip.h>	//setw()
#include <conio.h>	//getch()
#include <stdio.h>	//rename()
#include <limits.h>	//INT_MIN
char menu();
void add_data();
void update_data();
void display();
void delete_data();
fstream file;

void main()
{ char ch;
  int delete_key=0;
  file.open("numbers.dat",ios::in|ios::out|ios::binary);
  do
  {
    ch = menu();
    switch (ch)
    { case '1':add_data();		//新增
               break;
      case '2':update_data();	//更新
               break;
      case '3':display();		//查詢
               break;
      case '4':delete_data();	//刪除
               delete_key=1;
               break;
    }
  } while (ch!='0');
  if (delete_key==1)
  { int data;
    ofstream outfile("tem.dat",ios::app|ios::binary);
    file.seekg(0);			//檔首
    file.read((char*)&data,sizeof(int));
    while (file)
    { if (data!=INT_MIN)	//正常資料需存檔
      outfile.write((char*)&data,sizeof(int));
      file.read((char*)&data,sizeof(int));
    }
    file.close();				//關檔R_stru.dat
    outfile.close();			//關檔tem.dat
    remove("numbers.dat");	//刪檔
    rename("tem.dat","numbers.dat");	//更改檔名
  }
  cout << "\n按任意鍵結束.";
  getch();
}//main

//get_data
void get_data(int *a)
{
  cout << "輸入任意數="; cin >> *a;

}//get_data()

//add_data
void add_data()
{ char ch;
  int data;
  do
  { get_data(&data);
    file.seekg(0,ios::end);
    file.write((char*)&data,sizeof(int));
    cout << "再輸入嗎?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//add_data()

//show_data
void show_data(int a)
{ if (a==INT_MIN)
  cout << "本筆資料已註明刪除.\n";
  cout << a << endl;
}//show_data()

//update_data
void update_data()
{ int n,position;
  char ch;
  int data;
  do
  { cout << "欲更新第幾筆資料:"; cin >> n;
    position = (n-1) * sizeof(int);
    file.seekg(position);
    file.read((char*)&data,sizeof(int));	//讀取
    show_data(data);		//顯示資料
    get_data(&data);		//修改資料
    file.seekg(position);
    file.write((char*)&data,sizeof(int));	//寫入更新
    cout << "再更新嗎?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//update_data()

//menu()
char menu()
{ char ch;
  cout << "\n0. End.";
  cout << "\n1. 新增.";
  cout << "\n2. 更新.";
  cout << "\n3. 查詢.";
  cout << "\n4. 刪除.\n";
  cout << "\n 選項:"; cin >> ch;
  return ch;
}//menu()

//display()
void display()
{ char ch;
  int filesize,n,position;
  int data;
  file.seekg(0,ios::end);		//檔尾
  filesize = file.tellg()/sizeof(int);
  cout << "檔案有 " << filesize <<" 筆\n";
  do
  {
    cout << "欲查詢第幾筆資料:"; cin >> n;
    position = (n-1) * sizeof(int);
    file.seekg(position);
    file.read((char*)&data,sizeof(int));
    show_data(data);
    cout << "要再查詢嗎?(Y/N)"; cin >> ch;
  } while (ch=='Y' || ch=='y');
}//display()

//delete_data
void delete_data()
{ int n,position;
  char ch;
  int data;
  do
  { cout << "欲刪除第幾筆資料:"; cin >> n;
    position = (n-1) * sizeof(int);
    file.seekg(position);
    file.read((char*)&data,sizeof(int));	//讀取
    cout << data << endl;		//顯示資料
    data = INT_MIN;
    file.seekg(position);
    file.write((char*)&data,sizeof(int));	//寫入更新
    cout << "再刪除嗎?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//delete_data()