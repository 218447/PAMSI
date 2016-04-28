#ifndef TABLICAHASH_HH
#define TABLICAHASH_HH

#include "list.hh"
#include <cstdlib>

class TablicaHash {
private:
  Tablica<List<listElement>>* tablicaHash;
  int size;
public:
  TablicaHash(const int & initialSize);
  ~TablicaHash();
  int hashFunction (std::string& element);
  int getSize();
  int getElement(std::string& key);
  void addElement(listElement& element);
};

#endif
