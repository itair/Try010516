//GobalFuc.h //模版重载 与 显示声明  //全局函数

#ifndef TRY0101_TRY0101_GOBLALFUN_H
#define TRY0101_TRY0101_GOBLALFUN_H

#include <string>
#include <list>
#include <vector>


 void showtitle(void);

 bool IsOtto(const std::string & st);

 bool IsOttoDiffCaps(const std::string & st); 
 
 int Reduce (long ar[], int n);

 template<class T>
 int Reduce_(T ar[], int n){
   list<long> lar;
   for (int i = 0; i < n; i++) {
     lar.push_back(ar[i]);
   }   
   lar.sort();
   lar.unique();
   return (int)lar.size(); 
 }

std::vector<int> Lotto(const int , const int);
void InputName(std::list<std::string>&);

void ShowList(std::list<std::string>&);

std::list<std::string> MergeList(const std::list<std::string>&,
                                 const std::list<std::string>&) ;
//9
void CopyVector2List(std::vector<int>&, std::list<int>&);

void InitVectorRand(std::vector<int>&, const int);

void VectorSTLSortTimer(std::vector<int>&);

void ListSortTimer(std::list<int>&);

void List2VectorSort2ListTimer(std::vector<int>&, std::list<int>&);  //name.....

#endif //TRY0101_TRY0101_GOBLALFUN_H