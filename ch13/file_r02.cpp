//file_r02.cpp
#include <fstream.h>
#include <conio.h>	//getch()
void main()
{ int data,n, filesize;
  char ch;
  ifstream infile;
  infile.open("random.dat",ios::in|ios::out|ios::binary);
  infile.seekg(0,ios::end);		//�]�w���ɧ�
  filesize = infile.tellg();		//�D�ɮפj�p�Υثe��m
  cout << "�ثe�� " << filesize / sizeof(int) << " �����\n";
  do
  { cout << "��J��Ū���ĴX��:"; cin >> n;
    if ((n>0) && (n<= filesize / sizeof(int)))
    { int position = (n-1)*sizeof(int);
      cout << "position=" << position << endl;
      infile.seekg(position);
      infile.read((char*)&data,sizeof(int));
      cout << data << endl;
    }
    cout << "�A��J��(Y/N)?"; cin >> ch;
  }while ((ch=='y')||(ch=='Y'));

  cout << "�ɮ׸�Ʀp�U:\n";
  infile.seekg(0);
  infile.read((char*)&data,sizeof(int));	//Ū�����
  while (!infile.eof())	//EOF�N����
  { cout << data << ",";
    infile.read((char*)&data,sizeof(int));	//Ū�����
  }
  cout << endl;
  getch();
}
