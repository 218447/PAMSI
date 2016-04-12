#include "list.hh"
#include <cstdlib>
#include "stoper.hh"
int main () {
  Stoper *stoper = new Stoper;
  List<int> *lista = new List<int>;
  srand (time(NULL));
  int ilosc=1000;
  stoper->start();
  for (int a=1; a<ilosc; a++) {
    lista->add(rand() % ilosc, a);
  }
  stoper->stop();
  int pozycja=lista->search(8);
  if(pozycja==0) {
    std::cout << "Element nie znajduje sie na liście." << std::endl;
  } else std::cout << "Element znajduje sie na miejscu:" << pozycja << std::endl;
  std::cout << "Czas przeszukiwania wynosi: " << *stoper->wyswietl() << "ms" << std::endl;
}

  
