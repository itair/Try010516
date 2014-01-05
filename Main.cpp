/*-----------------------------------------
//   C++ Primer Plus 课后习题 p298 8.8
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include <iostream>
#include <string>


using namespace std;

void main()
{
  showtitle();
  longline();

  longline(1); //1  
  string str1("lolol"), str2("Madam"), str3("Madam, I'm Adam");
  cout << "String:" << "\t\t\tTrue/False:\n";
  cout << str1 << "\t\t\t" << IsOtto(str1) << endl;
  cout << str2 << "\t\t\t" << IsOtto(str2) << endl;
  cout << str3 << "\t\t" << IsOtto(str3) << endl;
  // 回文 1  .at

  longline(2); // 2
  cout << "String:" << "\t\t\tTrue/False:\n";
  cout << str1 << "\t\t\t" << IsOttoDiffCaps(str1) << endl;
  cout << str2 << "\t\t\t" << IsOttoDiffCaps(str2) << endl;
  cout << str3 << "\t\t" << IsOttoDiffCaps(str3) << endl;

  longline();
  system("pause");
}