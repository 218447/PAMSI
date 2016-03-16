#include "tab.hh"

/* Program przyjmuje na wejście liczbę elementów, jakie maja być zaalokowane do tablicy dynamicznej, następnie je tworzy przy pomocy generatora liczb pseudolosowych.
 */ 

int main(int argc, char * argv[]) {
  if (argc==1) exit(0);   //brak argumentów wywołania programu
  else {
      
      int rozmiar = 10;   //rozmiar początkowy tablicy 
      int Ilosc = atoi (argv[1]);  //parsowanie argumentów wywołania
      clock_t s, f;       //zmienne czasowe, do stopera
      double czas[3];

      Tablica* tab = new Tablica (rozmiar);
      
      s = clock ();
      srand(time(NULL));
      for (int i=0; i<Ilosc; ++i) {
      tab->dodajElem(rand() );
      }
      f = clock ();
      czas[0] = (double)(f - s) / (double)(CLOCKS_PER_SEC);;
      int a=tab->rozmiar();
      std::cout <<a<<std::endl;
      Tablica* tabPlus = new Tablica (rozmiar);
      
      s = clock ();
      srand(time(NULL));
       for (int i=0; i<Ilosc; ++i) {
      tabPlus->dodajElemPlus(rand() );
       }
      f = clock ();
      czas[1] = (double)(f - s) / (double)(CLOCKS_PER_SEC);;

      Tablica* tabRazy = new Tablica (rozmiar);
      
      s = clock ();
      srand(time(NULL));
       for (int i=0; i<Ilosc; ++i) {
      tabRazy->dodajElemRazy(rand() );
       }
      f = clock ();
      czas[2] = (double)(f - s) / (double)(CLOCKS_PER_SEC);;

      std::cout << "Metoda nr 1 dla: " << Ilosc << " czas wykonania wynosi: " << czas[0] <<std::endl;
      std::cout << "Metoda nr 2 dla: " << Ilosc << " czas wykonania wynosi: " << czas[1] <<std::endl;
      std::cout << "Metoda nr 3 dla: " << Ilosc << " czas wykonania wynosi: " << czas[2] <<std::endl;
    }
}
