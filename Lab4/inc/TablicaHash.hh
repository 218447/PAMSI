#ifndef TABLICAHASH_HH
#define TABLICAHASH_HH

#include "list.hh"
#include "listElement.hh"
#include <cstdlib>

class TablicaHash {
private:
  List<listElement>* tablicaHash;
  int sizeOfBuckets;
  int size = 1;
public:
  TablicaHash(const int & initialSize);
  ~TablicaHash();
  int hashFunction (std::string& element);
  int getSize();
  int getElement(std::string& key);
  void addElement(listElement& element);

};

#endif
