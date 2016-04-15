#ifndef TABLICAHASH_HH
#define TABLICAHASH_HH

#include "List.hh"

class TablicaHash {
private:
  List<String>* tablicaHash;
  size;
public:
  TablicaHash(const int initialSize);
  ~TablicaHash();
  int hashFunction (cont *String element);
  int getSize();

#endif
