//Inline.h  // ȫ�ֳ��������� //��Դ����

#ifndef TRY0101_TRY0101_INLINE_H
#define TRY0101_TRY0101_INLINE_H
#include <iostream>
#include <vector>

//��������

const int kNUM = 26;
const std::string wordlist[kNUM] = {"apiary", "beetle", "cereal",
  "danger", "ensign", "florid", "garage", "health", "insult",
  "jackal", "keeper", "loaner", "manage", "nonce", "onset",
  "plaid", "quilt", "remote", "stolid", "train", "useful",
  "valid", "whence", "xenon", "yearn", "zippy"};
const unsigned int kBigN = 100000;
const unsigned int kBigNN = 1000000;
const unsigned int kBigNNN = 10000000;


inline void longline(void) { 
  std::cout<< "_________________________\n\n";
}
inline void longline(const int i) { 
  std::cout<< "\n " << i << ".__________________\n\n"; 
}

#endif //TRY0101_TRY0101_INLINE_H