#ifndef TABLICAASOCJACYJNA_HH
#define TABLICAASOCJACYJNA_HH

#include <iostream>
#include <string>
#include "TablicaHash.hh"
#include <fstream>

class TablicaAsocjacyjna {
private:
  TablicaHash* tablicaAsocjacyjna;
public:
  TablicaAsocjacyjna(const &int size);
  ~TablicaAsocjacyjna();
  int getSize();
  void add(const char* fileName);
};

#endif
