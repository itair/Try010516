 //全局方法实现  Gobalfuc.cppp

#include "GobalFuc.h"
#include <iostream>
#include <cctype>
#include <list>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <ctime>
#include <chrono>

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

//8
void InputName(std::list<std::string>& li) {
  if (li.empty()) {
    std::string instr;
    std::cin.clear();
    std::cin.sync();
     while ( std::cin >> instr)  {
       li.push_back(instr);
     }    
  }  else  {
    std::cout << "Namelist exist!\n";
    return;
  }
}

void ShowList(std::list<std::string>& li) {
  /*std::sort(std::list.begin(), std::list.end());*/ //费事 速度快
  li.sort(); //省事 狂慢
  for (std::string st : li)  {
    std::cout<< st << std::endl;
  }
}

std::list<std::string> MergeList(const std::list<std::string>& la,
                                 const std::list<std::string>& lb) {
  std::list<std::string> laa = la;
  std::list<std::string> lbb = lb;
  laa.merge(lbb);
  laa.unique();
  return laa;
}

//9
void CopyVector2List(std::vector<int>& vv, std::list<int>& li) {
  if (!li.empty())  {
    li.clear();
  }
  for(int num: vv){
    li.push_back(num);
  }   
}

void InitVectorRand(std::vector<int>& vv, const int nn) {
  if (!vv.empty())
    vv.clear();
  unsigned int num;
  for (int i = 0; i < nn; i++) {
   num = rand();
    vv.push_back(num);
  }
}

void VectorSTLSortTimer(std::vector<int>& vv) {
  clock_t start = clock();
  std::sort(vv.begin(),vv.end());
  clock_t end = clock();
  std::cout << "STL sort() use: " 
            << (end - start) << " ms " << std::endl;
}

void ListSortTimer(std::list<int>& li) {
  clock_t start = clock();
  li.sort();
  clock_t end = clock();
  std::cout << "List.sort() use: " 
    << (end - start) << " ms " <<  std::endl;
}

void List2VectorSort2ListTimer(std::vector<int>& vv, std::list<int>& li) {
  if (!vv.empty()) 
    vv.clear();
   clock_t start = clock();
   for (int num : li) {
     vv.push_back(num);
   }
   sort(vv.begin(), vv.end());
   li.clear();
   for(int num: vv){
     li.push_back(num);
   }   
   clock_t end = clock();
   std::cout << "List copy to vector use STL sort() then copyback use: " 
     << (end - start) << " ms " << std::endl;
}  //name.....真是太有才了我


bool operator<(const  Review &  r1, const Review & r2)
{
  if (r1.title < r2.title)
    return true;
  else if (r1.title == r2.title &&  r1.rating < r2.rating )
    return true;
  else if (r1.title == r2.title && r1.rating == r2.rating &&
    r1.price < r2.price)  {
      return true;
  } else
    return false;
}

bool worseThan(const  Review &  r1,   const  Review &  r2)
{
  if (r1.rating < r2.rating)
    return true;
  else
    return false;
}

bool FillReview(Review & rr)
{
  std::shared_ptr<Review> spt(new Review);
  std::cout << "Enter book title (quit to quit): ";
  std::getline(std::cin,spt->title);
  if (rr.title == "quit")
    return false;
  std::cout << "Enter book rating: ";
  std::cin >> spt->rating;
  if (!std::cin)
    return false;
  std::cout << "Enter book price: ";
  std::cin >> spt->price;
  if (!std::cin)
    return false;
  std::cin.get();
  rr = *spt;
  return true;
}

void ShowReview(const Review & rr)
{
  std::cout << rr.rating << "\t" 
    << rr.title << "\t"
    << rr.price << std::endl; 
}