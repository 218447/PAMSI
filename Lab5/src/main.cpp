#include "Tree.hh"
#include "stoper.hh"

int main () {

  Tree* Drzewo = new Tree();
  Stoper stoper;
  int found;  //zmienna sprawdzajaca czy znaleziono element
  int seeked; //zmienna, ktora szukamy
  double czas[2];
  
  stoper.start();
  Drzewo >> "li¶cie_10";
  stoper.stop();
  
  stoper.start();
  seek = Tree.find(seeked);
  stoper.stop();

  if (seeked == found) {
    std::cout << "znaleziono" <<std::endl;
  }
  czas=stoper.wyswietl();
  std::cout << "Czas zapisu dla: " << "10 elementow" << "wynosi: " << czas[0] << std::endl << std::endl << "Czas szukania elementu: " << seeked << "wynosi: " << czas[1]<<std::endl;
}
