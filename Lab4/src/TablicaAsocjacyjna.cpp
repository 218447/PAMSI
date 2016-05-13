#include "TablicaAsocjacyjna.hh"

TablicaAsocjacyjna::TablicaAsocjacyjna(const int& size) {
  tablicaAsocjacyjna = new TablicaHash(size);
}

TablicaAsocjacyjna::~TablicaAsocjacyjna() {
  delete tablicaAsocjacyjna;
}

void TablicaAsocjacyjna::add (listElement& elem) {
  tablicaAsocjacyjna->addElement(elem);
  }

std::istream &operator >> (std::istream& in, TablicaAsocjacyjna* tab) {
  int element;
  std::string key;
  listElement EL;
  while (in >> element || in >> key) {
    EL.value=element;
    EL.key=key;
   tab->add(EL);
  }
}

int TablicaAsocjacyjna::getSize() {
  return tablicaAsocjacyjna->getSize();
}

int TablicaAsocjacyjna::get(std::string& key) {
  return tablicaAsocjacyjna->getElement(key);
}
