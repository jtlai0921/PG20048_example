//disk.cpp
#include <iostream.h>
#include <dir.h>
#include <conio.h>
void main(void)
{
  int disk, disks, current;
  current = getdisk();			//���o�ثe�Ϻ�
  disks = setdisk(current);	//�]�w�Ϻ�,���ˬd�i�κϺм�
  disk = current + 'A';
  cout <<"�޿�Ϻо��Ƭ�:"<< disks;
  cout <<"\n�ثe�Ϻо���:"<< char(disk);
  cout<<"\n�i�κϺЦp�U:\n";
  for (disk = 0;disk < 26;++disk)
  {
    setdisk(disk);
    if (disk == getdisk())
      cout <<char (disk+'A')<<"�i�ϥ�\n";
   }
  setdisk(current);
  getch();
 }