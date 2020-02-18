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
    { case '1':add_data();		//�s�W
               break;
      case '2':update_data();	//��s
               break;
      case '3':display();		//�d��
               break;
      case '4':delete_data();	//�R��
               delete_key=1;
               break;
    }
  } while (ch!='0');
  if (delete_key==1)
  { int data;
    ofstream outfile("tem.dat",ios::app|ios::binary);
    file.seekg(0);			//�ɭ�
    file.read((char*)&data,sizeof(int));
    while (file)
    { if (data!=INT_MIN)	//���`��ƻݦs��
      outfile.write((char*)&data,sizeof(int));
      file.read((char*)&data,sizeof(int));
    }
    file.close();				//����R_stru.dat
    outfile.close();			//����tem.dat
    remove("numbers.dat");	//�R��
    rename("tem.dat","numbers.dat");	//����ɦW
  }
  cout << "\n�����N�䵲��.";
  getch();
}//main

//get_data
void get_data(int *a)
{
  cout << "��J���N��="; cin >> *a;

}//get_data()

//add_data
void add_data()
{ char ch;
  int data;
  do
  { get_data(&data);
    file.seekg(0,ios::end);
    file.write((char*)&data,sizeof(int));
    cout << "�A��J��?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//add_data()

//show_data
void show_data(int a)
{ if (a==INT_MIN)
  cout << "������Ƥw�����R��.\n";
  cout << a << endl;
}//show_data()

//update_data
void update_data()
{ int n,position;
  char ch;
  int data;
  do
  { cout << "����s�ĴX�����:"; cin >> n;
    position = (n-1) * sizeof(int);
    file.seekg(position);
    file.read((char*)&data,sizeof(int));	//Ū��
    show_data(data);		//��ܸ��
    get_data(&data);		//�ק���
    file.seekg(position);
    file.write((char*)&data,sizeof(int));	//�g�J��s
    cout << "�A��s��?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//update_data()

//menu()
char menu()
{ char ch;
  cout << "\n0. End.";
  cout << "\n1. �s�W.";
  cout << "\n2. ��s.";
  cout << "\n3. �d��.";
  cout << "\n4. �R��.\n";
  cout << "\n �ﶵ:"; cin >> ch;
  return ch;
}//menu()

//display()
void display()
{ char ch;
  int filesize,n,position;
  int data;
  file.seekg(0,ios::end);		//�ɧ�
  filesize = file.tellg()/sizeof(int);
  cout << "�ɮצ� " << filesize <<" ��\n";
  do
  {
    cout << "���d�߲ĴX�����:"; cin >> n;
    position = (n-1) * sizeof(int);
    file.seekg(position);
    file.read((char*)&data,sizeof(int));
    show_data(data);
    cout << "�n�A�d�߶�?(Y/N)"; cin >> ch;
  } while (ch=='Y' || ch=='y');
}//display()

//delete_data
void delete_data()
{ int n,position;
  char ch;
  int data;
  do
  { cout << "���R���ĴX�����:"; cin >> n;
    position = (n-1) * sizeof(int);
    file.seekg(position);
    file.read((char*)&data,sizeof(int));	//Ū��
    cout << data << endl;		//��ܸ��
    data = INT_MIN;
    file.seekg(position);
    file.write((char*)&data,sizeof(int));	//�g�J��s
    cout << "�A�R����?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//delete_data()