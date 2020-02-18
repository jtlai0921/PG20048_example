//file_ok.cpp
#include <fstream.h>
#include <iomanip.h>	//setw()
#include <conio.h>	//getch()
#include <stdio.h>	//rename()
struct rec
{ short status;			//0:normal , 1:deleted
  char seat[3];
  char name[11];
  short score[3];   //國英數
  int total;
};
char menu();
void add_data();
void update_data();
void display();
void delete_data();
fstream file;

void main()
{ char ch;
  int delete_key=0;
  file.open("R_stru.dat",ios::in|ios::out|ios::binary);
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
  { rec student;
    ofstream outfile("tem.dat",ios::app|ios::binary);
    file.seekg(0);			//檔首
    file.read((char*)&student,sizeof(rec));
    while (file)
    { if (student.status==0)	//正常資料需存檔
      outfile.write((char*)&student,sizeof(rec));
      file.read((char*)&student,sizeof(rec));
    }
    file.close();				//關檔R_stru.dat
    outfile.close();			//關檔tem.dat
    remove("R_stru.dat");	//刪檔
    rename("tem.dat","R_stru.dat");	//更改檔名
  }
  cout << "\n按任意鍵結束.";
  getch();
}//main

//get_data
void get_data(rec *a)
{ a->status = 0;	//normal data
  cout << "seat="; cin >> a->seat;
  cout << "name="; cin >> a->name;
  cout << "國,英,數="; cin >> a->score[0] >> a->score[1] >> a->score[2];
  a->total = a->score[0]+a->score[1]+a->score[2];
}//get_data()

//add_data
void add_data()
{ char ch;
  rec student;
  do
  { get_data(&student);
    file.seekg(0,ios::end);
    file.write((char*)&student,sizeof(rec));
    cout << "再輸入嗎?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//add_data()

//show_data
void show_data(rec a)
{ if (a.status!=0)
  cout << "本筆資料已註明刪除.\n";
  cout << setw(4) << a.seat
       << setw(12)<< a.name
       << setw(4) << a.score[0]
       << setw(4) << a.score[1]
       << setw(4) << a.score[2]
       << setw(5) << a.total << endl;
}//show_data()

//update_data
void update_data()
{ int n,position;
  char ch;
  rec student;
  do
  { cout << "欲更新第幾筆資料:"; cin >> n;
    position = (n-1) * sizeof(rec);
    file.seekg(position);
    file.read((char*)&student,sizeof(rec));	//讀取
    show_data(student);		//顯示資料
    get_data(&student);		//修改資料
    file.seekg(position);
    file.write((char*)&student,sizeof(rec));	//寫入更新
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
  rec student;
  file.seekg(0,ios::end);		//檔尾
  filesize = file.tellg()/sizeof(rec);
  cout << "檔案有 " << filesize <<" 筆\n";
  do
  {
    cout << "欲查詢第幾筆資料:"; cin >> n;
    position = (n-1) * sizeof(rec);
    file.seekg(position);
    file.read((char*)&student,sizeof(rec));
    show_data(student);
    cout << "要再查詢嗎?(Y/N)"; cin >> ch;
  } while (ch=='Y' || ch=='y');
}//display()

//delete_data
void delete_data()
{ int n,position;
  char ch;
  rec student;
  do
  { cout << "欲刪除第幾筆資料:"; cin >> n;
    position = (n-1) * sizeof(rec);
    file.seekg(position);
    file.read((char*)&student,sizeof(rec));	//讀取
    show_data(student);		//顯示資料
    student.status=1;		//設為刪除
    file.seekg(position);
    file.write((char*)&student,sizeof(rec));	//寫入更新
    cout << "再刪除嗎?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//delete_data()