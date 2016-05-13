#include "TablicaHash.hh"

TablicaHash::TablicaHash(const int& initialSize) {
  //stworzenie tablicy hashujacej
  tablicaHash = new List<listElement>[initialSize];
  sizeOfBuckets = initialSize;
}

TablicaHash::~TablicaHash() {
  delete [] tablicaHash;
}

int TablicaHash::hashFunction (std::string& hashedKey) {
  return atoi(hashedKey.c_str()) % sizeOfBuckets;
}

int TablicaHash::getSize () {
  return size;
}

void TablicaHash::addElement (listElement& element) {
  int uniqueKey = hashFunction (element.key);
  tablicaHash[uniqueKey].add(element, size);
  ++size;
}

int TablicaHash::getElement ( std::string& key) {
  int hashedKey = hashFunction (key);
  return tablicaHash[hashedKey].search(key);
}


