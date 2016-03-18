#include "tab.hh"

/* Program przyjmuje na wejście liczbę elementów, jakie maja być zaalokowane do tablicy dynamicznej, następnie je tworzy przy pomocy generatora liczb pseudolosowych.
 */ 

int main(int argc, char * argv[]) {
  if (argc==1) exit(0);   //brak argumentów wywołania programu
  else {
    tablicaTest *tab = new tablicaTest;
    tab->przygotuj(argv[0]);
    tab->wykonaj();

    std::cout << "Metoda nr 1 dla: " << tab->rozmiar << " czas wykonania wynosi: " << tab->Czasy[0] <<std::endl;
      std::cout << "Metoda nr 2 dla: " << tab->rozmiar << " czas wykonania wynosi: " << tab->Czasy[1] <<std::endl;
      std::cout << "Metoda nr 3 dla: " << tab->rozmiar << " czas wykonania wynosi: " << tab->Czasy[2] <<std::endl;
    }
}
