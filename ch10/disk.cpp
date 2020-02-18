//disk.cpp
#include <iostream.h>
#include <dir.h>
#include <conio.h>
void main(void)
{
  int disk, disks, current;
  current = getdisk();			//取得目前磁碟
  disks = setdisk(current);	//設定磁碟,並檢查可用磁碟數
  disk = current + 'A';
  cout <<"邏輯磁碟機數為:"<< disks;
  cout <<"\n目前磁碟機為:"<< char(disk);
  cout<<"\n可用磁碟如下:\n";
  for (disk = 0;disk < 26;++disk)
  {
    setdisk(disk);
    if (disk == getdisk())
      cout <<char (disk+'A')<<"可使用\n";
   }
  setdisk(current);
  getch();
 }