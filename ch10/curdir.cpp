//curdir.cpp
#include <dir.h>
#include <iostream.h>
#include <string.h>
#include <conio.h>
char *current_directory(char *path)
{
  strcpy(path, "X:\\");     /*將磁碟機及主目錄格式放入 X:\ */
  path[0] = char('A' + getdisk());//取得目前磁碟機並取代X
  getcurdir(0, path+3);  //將目前路徑放入字串第四個位置開始
  return(path);
}
void main(void)
{
  char curdir[MAXPATH];  //設定內定最大路徑長
  cout << "MAXPATH="<<MAXPATH<<endl;
  current_directory(curdir);	//呼叫函數取得目前路徑
  cout<<"目前路徑為:"<<curdir<<endl;
  char cwd[MAXPATH];
  getcwd(cwd,MAXPATH);
  cout<<"以getcwd取得之工作路徑為:"<<cwd<<endl;
  getch();
}