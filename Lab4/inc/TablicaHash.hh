#ifndef TABLICAHASH_HH
#define TABLICAHASH_HH

#include "list.hh"
#include <string>

class TablicaHash {
private:
  Tablica<List<listElement>>* tablicaHash;
  size;
public:
  TablicaHash(const int initialSize);
  ~TablicaHash();
  int hashFunction (const *std::string element);
  int getSize();
  int getElement(const &listElement key);
  void addElement(const &listElement element);
};

#endif
