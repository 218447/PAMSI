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

void addElement (const &listElement element) {
  size++;
  int uniqueKey = hashFunction (element.key);
  tablicaHash[uniqueKey]->add(element);
}

String getElement (const &String key) {
  hashedKey = hashFunction (key);
  return tablica[hashedKey]->search(key);
}
