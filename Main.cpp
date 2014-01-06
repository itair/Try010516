/*-----------------------------------------
//   C++ Primer Plus 课后习题 p728 1.10
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <memory>
#include <numeric>
#include <algorithm>

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
  // 回文 带字符转换

  longline(3); //3
//   std::srand((unsigned)std::time(0));
//   vector<const string> wordlistvector;
//   fstream ofile;
//   ofile.open("wordbook.txt", ios_base::in);
//   if (ofile.is_open())  {
//     string temp;
//     while (ofile.good())  { 
//       ofile >> temp;      
//       wordlistvector.push_back(temp);    
//     }
//   } else {
//     cout << "Can't open wordbook.txt\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   }
//   
//   char play;
//   cout << "Will you play a word game? <y/n> ";
//   cin >> play;
//   play = tolower(play);
//   while (play == 'y')
//   {
//     
//     string target = wordlistvector.at(std::rand() % wordlistvector.size());
//     int length = target.length();
//     string attempt(length, '-');
//     string badchars;
//     int guesses = 6;
// 
// 
//     cout << "Guess my secret word. It has " << length
//       << " letters, and you guess\n"
//       << "one letter at a time. You get " << guesses
//       << " wrong guesses.\n";
//     cout << "Your word: " << attempt << endl;
//     while (guesses > 0 && attempt != target)
//     {
//       char letter;
//       cout << "Guess a letter: ";
//       cin >> letter;
//       if (badchars.find(letter) != string::npos
//         || attempt.find(letter) != string::npos)
//       {
//         cout << "You already guessed that. Try again.\n";
//         continue;
//       }
//       int loc = target.find(letter);
//       if (loc == string::npos)
//       {
//         cout << "Oh, bad guess!\n";
//         --guesses;
//         badchars += letter; // add to string
//       }
//       else
//       {
//         cout << "Good guess!\n";
//         attempt[loc]=letter;
//         // check if letter appears again
//         loc = target.find(letter, loc + 1);
//         while (loc != string::npos)
//         {
//           attempt[loc]=letter;
//           loc = target.find(letter, loc + 1);
//         }
//       }
//       cout << "Your word: " << attempt << endl;
//       if (attempt != target)
//       {
//         if (badchars.length() > 0)
//           cout << "Bad choices: " << badchars << endl;
//         cout << guesses << " bad guesses left\n";
//       }
//     }
//     if (guesses > 0)
//       cout << "That's right!\n";
//     else
//       cout << "Sorry, the word is " << target << ".\n";
// 
//     cout << "Will you play another? <y/n> ";
//     cin >> play;
//     play = tolower(play);
//   }
//   ofile.close();
//   cout << "Bye\n";
  // 使用vector 替代 数组进行文件读写

  longline(4); //4
  long ch[7]={1, 3, 3, 5, 1, 1};
  int afterlenght = Reduce(ch, 7);
  cout << " {1, 3, 3, 5, 1, 1} " << " Redcue lenth = " << afterlenght << endl;
   //list 轻松愉快..

  longline(5);//5
  long chh[7]={1, 3, 3, 5, 1, 1};
  char str[11] = {"woleigequo"};
  int chh_reduced = Reduce_(chh, 7);
  int str_reduced = Reduce_(str, 11);
  cout << " {1, 3, 3, 5, 1, 1} " << "  chh_reduced = " << chh_reduced  << endl;
  cout << "woleigequo" << "   str_reduced = " << str_reduced << endl;
  // 模版中使用 容器和 stl  

  longline(6); // 6不写了  用vector 整体替代

  longline(7); // 7
  vector<int> winners;
  winners = Lotto(51,6);
  for ( int i : winners) {
    cout << i << endl;
  }// 随机数

  longline(8);//
//   list<string> matlist;
//   list<string> patlist;
//   cout << "Enter Mat's namelist:-------------------\n";
//   InputName(matlist);
//   ShowList (matlist);
//   cout<< "Enter Pat's namelist:----------------- \n";
//   InputName(patlist);
//   ShowList (patlist);
//   list<string> namelist;
//   namelist = MergeList (patlist, matlist);
//   cout << "The namelist :-----------------\n";
//   ShowList (namelist);
  // list 用法和 stl函数

  longline(9); //9
  vector<int> vi0 ;
  vector<int> vi;
  list<int> li;
// 
//   cout << "Number set : " << kBigN << endl;
//   InitVectorRand(vi0, kBigN);
//   vi = vi0;
//   CopyVector2List(vi0, li);
//   ListSortTimer(li);
//   VectorSTLSortTimer(vi);
//   CopyVector2List(vi0, li);
//   List2VectorSort2ListTimer(vi, li);
// 
//   cout << "Number set : " << kBigNN << endl;
//   InitVectorRand(vi0, kBigNN);
//   vi = vi0;
//   CopyVector2List(vi0, li);
//   ListSortTimer(li);
//   VectorSTLSortTimer(vi);
//   CopyVector2List(vi0, li);
//   List2VectorSort2ListTimer(vi, li);
// 
//   cout << "Number set : " << kBigNNN << endl;
//   InitVectorRand(vi0, kBigNNN);
//   vi = vi0;
//   CopyVector2List(vi0, li);
//   ListSortTimer(li);
//   VectorSTLSortTimer(vi);
//   CopyVector2List(vi0, li);
//   List2VectorSort2ListTimer(vi, li);
  //记得一定要 用released版运行,,debug版慢得要死...

  longline(10); //10 ///////////////////////////////////////////
  vector<Review> books ;
   Review temp;
  while (FillReview(temp)){   
    books.push_back(temp);
  }
  cout << "Thank you. You entered the following "
    << books.size() << " ratings:\n"
    << "Rating\tBook\n";
  for(Review pt: books) ShowReview(pt);
  sort(books.begin(), books.end());
  cout << "Sorted by title:\nRating\tBook\n";
  for_each(books.begin(), books.end(), ShowReview);

  sort(books.begin(), books.end(), worseThan);
  cout << "Sorted by rating:\nRating\tBook\n";
  for_each(books.begin(), books.end(), ShowReview);

  random_shuffle(books.begin(), books.end());
  cout << "After shuffling:\nRating\tBook\n";
  for_each(books.begin(), books.end(), ShowReview);
  cout << "Bye.\n";
  ////////////////////////////////////////////////////////////
  longline();
  system("pause");



}