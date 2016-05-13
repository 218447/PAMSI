#include "TablicaAsocjacyjna.hh"
#include "stoper.hh"
#include <iostream>

int main() {
  TablicaAsocjacyjna* tab = new TablicaAsocjacyjna(1);
  Stoper stoper;
  std::ifstream file ("Aso_100"); 
  double *czas;
  std::string toSearchFor = "Kowalski";

  stoper.start();
  file >> tab;
  stoper.stop();

  stoper.start();
  tab->get(toSearchFor);
  stoper.stop();

  czas = stoper.wyswietl();

  std::cout << "Czas zapisu: " << czas[0] << std::endl << "Czas odczytu: " << czas[1] << std::endl;
}
