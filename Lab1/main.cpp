#include "tablicaTest.hh"

/* Program przyjmuje na wejście liczbę elementów, jakie maja być zaalokowane do tablicy dynamicznej, następnie je tworzy przy pomocy generatora liczb pseudolosowych.
 */ 

int main(int argc, char * argv[]) {
  if (argc==1) {
    std::cout << "Brak argumentów wywołania"<<std::endl;
    exit(0);//brak argumentów wywołania programu
  }
  else {
    tablicaTest *tab = new tablicaTest;
    tab->przygotuj(argv[1]);
    tab->wykonaj();
    delete tab;
  }
}
