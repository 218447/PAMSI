#include "TablicaHash.hh"

TablicaHash::TablicaHash(const int& initialSize) {
  //stworzenie tablicy hashujacej
  tablicaHash = new Tablica<List<listElement>>[initialSize];
  size = tablicaHash->rozmiar();
}

TablicaHash::~TablicaHash() {
  delete [] tablicaHash;
}

int TablicaHash::hashFunction (std::string& hashedKey) {
  return atoi(hashedKey.c_str()) % size;
}

int TablicaHash::getSize () {
  return size;
}

void TablicaHash::addElement (listElement& element) {
  size++;
  int uniqueKey = hashFunction (element.key);
  tablicaHash[uniqueKey].add(element, getSize() );
}

int TablicaHash::getElement ( std::string& key) {
  int hashedKey = hashFunction (key);
  return tablicaHash[hashedKey].search(key);
}
