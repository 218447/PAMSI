#ifndef STOPER_HH
#define STOPER_HH

#include <ctime>

/* Deklaracja klasy stoper, kt�ra zaczyna i ko�czy odmierza� czas w okre�lonych momentach czasu.
Zmienne prywatne:
poczatek - zmienna przechowuj�ca czas od poczatku
koniec - zmienna przechowuj�ca czas od ko�ca
czas - tablica przechowuj�ca czas jaki min��, przekonwertowana na sekundy

Metody:
start - pocz�tek odmierzania czasu
stop - koniec odmierzania czasu
wyswietl - zwraca czas jaki up�yn��
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
