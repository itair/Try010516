 //全局方法实现  Gobalfuc.cppp

#include "GobalFuc.h"
#include <iostream>
#include <cctype>
#include <list>
#include <algorithm>
#include <functional>

 void showtitle(void) { 
  using namespace std;
  cout<< "------------------------\n" 
    << "-  C++ Primer Plus    -\n" 
    << "-     by itAir        -\n"
    << "        &             -\n"     
    << "-  Hello World!       -\n";
}

bool IsOtto(const std::string & st){
  for (int i = 0;  i < (int)(st.size()/2); i++)  {
    if (st.at(i) != st.at(st.size()-1-i))
      return false;
  }
  return true;  
}

bool IsOttoDiffCaps(const std::string & st) {
  using namespace std;
  string ts;
  for (char c : st) {
    if (isalpha(c)) 
      ts.append(1,tolower(c));   
  }  
  for (int i = 0;  i < (int)(ts.size()/2); i++)  {
    if (ts.at(i) != ts.at(ts.size()-1-i)){
      return false;
    }
  }
  return true; 
} 

int Reduce (long ar[], int n) {
  using namespace std;
  list<long> lar;
  for (int i = 0; i < n; i++) {
    lar.push_back(ar[i]);
  }   
  lar.sort();
  lar.unique();
//   sort(lar.begin(), lar.end());
//   unique(lar.begin(), lar.end());
  return (int)lar.size();
}