#ifndef TABLICAASOCJACYJNA_HH
#define TABLICAASOCJACYJNA_HH

#include <iostream>
#include <String>
#include "TablicaHash.hh"

class TablicaAsocjacyjna {
private:
  TablicaHash* tablicaAsocjacyjna;
public:
  TablicaAsocjacyjna();
  ~TablicaAsocjacyjna();
  String operator (const int* klucz);
  void operator = (int *bucket, const string* element);
  getSize();
};

#endif
x
