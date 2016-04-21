#include "TablicaAsocjacyjna.hh"
#include "stoper.hh"

int main() {
  TablicaAsocjacyjna* tab = new TablicaAsocjacyjna;
  Stoper stoper;

  stoper.start();
  tab.get("TabAso10");
  stoper.stop();
}
