#ifndef STOPER_HH
#define STOPER_HH

#include <ctime>

/* Deklaracja klasy stoper, która zaczyna i koñczy odmierzaæ czas w okre¶lonych momentach czasu.
Zmienne prywatne:
poczatek - zmienna przechowuj±ca czas od poczatku
koniec - zmienna przechowuj±ca czas od koñca
czas - tablica przechowuj±ca czas jaki min±³, przekonwertowana na sekundy

Metody:
start - pocz±tek odmierzania czasu
stop - koniec odmierzania czasu
wyswietl - zwraca czas jaki up³yn±³
*/
class Stoper {
   private:
      clock_t poczatek;
      clock_t koniec;
      double czas[];
      int liczbaPomiarow;
   public:
      void start();
      void stop();
      double wyswietl();
      Stoper();
  
};

#endif
