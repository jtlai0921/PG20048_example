//file_ok.cpp
#include <fstream.h>
#include <iomanip.h>	//setw()
#include <conio.h>	//getch()
#include <stdio.h>	//rename()
struct rec
{ short status;			//0:normal , 1:deleted
  char seat[3];
  char name[11];
  short score[3];   //��^��
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
  { rec student;
    ofstream outfile("tem.dat",ios::app|ios::binary);
    file.seekg(0);			//�ɭ�
    file.read((char*)&student,sizeof(rec));
    while (file)
    { if (student.status==0)	//���`��ƻݦs��
      outfile.write((char*)&student,sizeof(rec));
      file.read((char*)&student,sizeof(rec));
    }
    file.close();				//����R_stru.dat
    outfile.close();			//����tem.dat
    remove("R_stru.dat");	//�R��
    rename("tem.dat","R_stru.dat");	//����ɦW
  }
  cout << "\n�����N�䵲��.";
  getch();
}//main

//get_data
void get_data(rec *a)
{ a->status = 0;	//normal data
  cout << "seat="; cin >> a->seat;
  cout << "name="; cin >> a->name;
  cout << "��,�^,��="; cin >> a->score[0] >> a->score[1] >> a->score[2];
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
    cout << "�A��J��?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//add_data()

//show_data
void show_data(rec a)
{ if (a.status!=0)
  cout << "������Ƥw�����R��.\n";
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
  { cout << "����s�ĴX�����:"; cin >> n;
    position = (n-1) * sizeof(rec);
    file.seekg(position);
    file.read((char*)&student,sizeof(rec));	//Ū��
    show_data(student);		//��ܸ��
    get_data(&student);		//�ק���
    file.seekg(position);
    file.write((char*)&student,sizeof(rec));	//�g�J��s
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
  rec student;
  file.seekg(0,ios::end);		//�ɧ�
  filesize = file.tellg()/sizeof(rec);
  cout << "�ɮצ� " << filesize <<" ��\n";
  do
  {
    cout << "���d�߲ĴX�����:"; cin >> n;
    position = (n-1) * sizeof(rec);
    file.seekg(position);
    file.read((char*)&student,sizeof(rec));
    show_data(student);
    cout << "�n�A�d�߶�?(Y/N)"; cin >> ch;
  } while (ch=='Y' || ch=='y');
}//display()

//delete_data
void delete_data()
{ int n,position;
  char ch;
  rec student;
  do
  { cout << "���R���ĴX�����:"; cin >> n;
    position = (n-1) * sizeof(rec);
    file.seekg(position);
    file.read((char*)&student,sizeof(rec));	//Ū��
    show_data(student);		//��ܸ��
    student.status=1;		//�]���R��
    file.seekg(position);
    file.write((char*)&student,sizeof(rec));	//�g�J��s
    cout << "�A�R����?(Y/N)"; cin >> ch;
  } while (ch=='y' || ch=='Y');
}//delete_data()