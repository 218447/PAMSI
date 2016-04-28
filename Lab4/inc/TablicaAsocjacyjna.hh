#ifndef TABLICAASOCJACYJNA_HH
#define TABLICAASOCJACYJNA_HH

#include <iostream>
#include <fstream>
#include "TablicaHash.hh"

class TablicaAsocjacyjna {
private:
  TablicaHash* tablicaAsocjacyjna;
public:
  TablicaAsocjacyjna(const int& size);
  ~TablicaAsocjacyjna();
  int getSize();
  void add(listElement & elem);
};
std::istream &operator >> (std::istream& in, TablicaAsocjacyjna* tab);
#endif
