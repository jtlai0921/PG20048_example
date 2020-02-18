//file_s02.cpp
#include <fstream.h>
#include <conio.h>
struct rec
{ char seat[3];
  char name[20];
  int score[3];
};
void main()
{ rec Bill={"01","Clinton",89,90,87};
//  rec n[1];
  ofstream outfile("sdata.dat",ios::binary);
//  n[0]=Bill;
  outfile.write((char*)&Bill,sizeof(rec));
  outfile.close();
  ifstream infile("sdata.dat",ios::binary);
  infile.read((char*)&Bill,sizeof(rec));
//  Bill=n[0];
  cout << Bill.seat<<endl
       << Bill.name<<endl
       << Bill.score[0]<<','<<Bill.score[1]<<','<<Bill.score[2]<<endl;
  getch();       
}       