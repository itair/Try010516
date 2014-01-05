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
//   for (int i = 0;  i < (int)(st.size()/2); i++)  {
//     if (st.at(i) != st.at(st.size()-1-i))
//       return false;
//   }
//   return true;  
  std::string ts = st;
  reverse(ts.begin(), ts.end());
  return st == ts;
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

std::vector<int>  Lotto(const int pools, const int picks) {
  std::vector<int> re;
  std::vector<int> allnum;
  for (int i = 1 ; i <= pools; i++)  {
    allnum.push_back(i);
  }
  for (int i = 0; i < picks; i++)  {
    random_shuffle(allnum.begin(), allnum.end());
    re.push_back(allnum.at(picks-i));
    allnum.pop_back();
  }
  return re; //编译时决定顺序?
}