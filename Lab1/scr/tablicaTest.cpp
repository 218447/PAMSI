#include "tablicaTest.hh"

tablicaTest::tablicaTest()
{}
void tablicaTest::przygotuj(const char * iloscElementow) {
  Ilosc = atoi (iloscElementow);
}
void tablicaTest::wykonaj() {
  srand (time(NULL) );
    Stoper stoper;
  stoper.start();
  for (int i=0; i<Ilosc; ++i) {
    dodajElem(rand() );
  }

  stoper.stop();
  
  Wyczysc();
  stoper.start();
  for (int i=0; i<Ilosc; ++i) {
    dodajElemPlus(rand() );
  }
  stoper.stop();
  Wyczysc();
  stoper.start();
  for (int i=0; i<Ilosc; ++i) {
    dodajElemRazy(rand() );
  }
  stoper.stop();
  Czasy = stoper.wyswietl();
  Wyswietl();
}
void tablicaTest::Wyswietl() {
  std::cout << "Metoda nr 1 dla: " << Ilosc << " czas wykonania wynosi: " << Czasy[0] << "ms" <<std::endl;
  std::cout << "Metoda nr 2 dla: " << Ilosc << " czas wykonania wynosi: " << Czasy[1] << "ms" <<std::endl;
  std::cout << "Metoda nr 3 dla: " << Ilosc << " czas wykonania wynosi: " << Czasy[2] << "ms" <<std::endl;
}
   
    
