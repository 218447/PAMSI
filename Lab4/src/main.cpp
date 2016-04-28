#include "TablicaAsocjacyjna.hh"
#include "stoper.hh"

int main() {
  TablicaAsocjacyjna* tab = new TablicaAsocjacyjna(10);
  Stoper stoper;
  std::ifstream file ("Aso_10"); 

  stoper.start();
  file >> tab;
  stoper.stop();
}
