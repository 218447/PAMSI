#include "tablicaTest.hh"

tablicaTest::tablicaTest()
{}
void tablicaTest::przygotuj(char iloscElementow) {
  int rozmiar = 10;   //rozmiar poczatkowy tablicy
  tab = new int [rozmiar];
  Ilosc = atoi (iloscElementow);
}
void tablicaTest::wykonaj() {
  srand (time(NULL));
  Stoper *stoper = new Stoper;

  stoper->start();
  for (int i=0; i<Ilosc; ++i) {
    tab->dodajElem(rand() );
  }
  stoper->stop();
  delete []tab;
  
  tab = new int[10];
  stoper->start();
  for (int i=0; i<Ilosc; ++i) {
    tab->dodajElemPlus(rand() );
  }
  stoper->stop();
  delete []tab;
   
  tab = new int[10];
  stoper->start();
  for (int i=0; i<Ilosc; ++i) {
    tab->dodajElemRazy(rand() );
  }
  stoper->stop();

  Czasy=stoper->wyswietl();
}
   
    
