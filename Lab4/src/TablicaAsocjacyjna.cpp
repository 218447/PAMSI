#include "TablicaAsocjacyjna.hh"

TablicaAsocjacyjna::TablicaAsocjacyjna(const &int size) {
  tablicaAsocjacyjna = new TablicaHash(size);
}

TablicaAsocjacyjna::~TablicaAsocjacyjna() {
  delete tablicaAsocjacyjna;
}

void TablicaAsocjacyjna::add (const char *fileName) {
  ifstream fileStream (fileName);
  
  if (fileStream.is_open()) {
    std::cout << "Nie powiedło się otwarcie pliku: " << fileName << std::endl;
    return false;
  }
  
  int sizeOfFile;
  listElement element;
  
  fileStream >> sizeOfFile;
  
  for (int i = 0; i < sizeOfFile; i++) {
    fileStream >> element;
    tablicaAsocjacyjna->addElement(element);
  }
}

int TablicaAsocjacyjna::getSize() {
  return tablicaAsocjacyjna->size();
}
