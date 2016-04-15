#include "TablicaHash.hh"

TablicaHash::TablicaHash(const &int initialSize) {
  //stworzenie tablicy hashujacej
  tablicaHash = new List<listElement>[initialSize];
  size = tablicaHash->getSize();
}

~TablicaHash::~TablicaHash() {
  delete [] tablicaHash;
}

int TablicaHash::hashFunction (String& hashedKey) {
    return hashedKey % size;
}

int getSize () {
  return size;
}

void addElement (const &String key, const &int element) {
  int uniqueKey = hashFunction (key);
  tablicaHash[uniqueKey]->add(element);
}

String getElement (const &String key) {
  hashedKey = hashFunction (key);
  return tablica[hashedKey]->search(key);
}
