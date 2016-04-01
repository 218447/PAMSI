#ifndef STOPER_HH
#define STOPER_HH

#include <ctime>

/* Deklaracja klasy stoper, która zaczyna i kończy odmierzać czas w określonych momentach czasu.
Zmienne prywatne:
poczatek - zmienna przechowująca czas od poczatku
koniec - zmienna przechowująca czas od końca
czas - tablica przechowująca czas jaki minął, przekonwertowana na sekundy

Metody:
start - początek odmierzania czasu
stop - koniec odmierzania czasu
wyswietl - zwraca czas jaki upłynął
*/
class Stoper {
   private:
      clock_t poczatek;
      clock_t koniec;
      double czas[3];
      int liczbaPomiarow;
   public:
      void start();
      void stop();
      double * wyswietl();
      Stoper();
  
};

#endif
