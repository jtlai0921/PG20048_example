//rand_count.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>	//randomize(),random
void main()
{ int i,one=0,two=0,three=0,four=0,five=0,
      six=0,seven=0,eight=0,nine=0,zero=0;
  randomize();
  for (i=1;i<=20;i++)
  switch (random(10))
  { case 0:zero++; break;
    case 1:one++;  break;
    case 2:two++;  break;
    case 3:three++;break;
    case 4:four++; break;
    case 5:five++; break;
    case 6:six++;  break;
    case 7:seven++;break;
    case 8:eight++;break;
    case 9:nine++; break;
  }
  cout << "1="<<one<<"\n"
       << "2="<<two<<"\n"
       << "3="<<three<<"\n"
       << "4="<<four<<"\n"
       << "5="<<five<<"\n"
       << "6="<<six<<"\n"
       << "7="<<seven<<"\n"
       << "8="<<eight<<"\n"
       << "9="<<nine<<"\n"
       << "0="<<zero<<"\n";
   getch();
 }
