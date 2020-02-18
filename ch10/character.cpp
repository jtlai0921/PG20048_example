//character.cpp
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <iomanip.h>	//setw()
void main(void)
{
  int c,count=0;
  for (c=0;c<255;c++)
  if (ispunct(c))
  { cout<< setw(3)<<c << '='<< char(c)<<' ';
    count++;
    if (count % 10==0) cout << endl;
  }
  cout << "\n¤@¦@ "<<count <<"­Ó";
  getch();
}
