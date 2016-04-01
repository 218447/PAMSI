#ifndef TABLICATEST_HH
#define TABLICATEST_HH

#include "tab.hh"
#include "interf.hh"
#include "stoper.hh"
#include <cstdlib>


/* Definicja klasy testowej tablicy, która dziedziczy interfejs "interf.hh", i dziedziczy po Tablicy ("tab.hh") wszystkie metody i elementy.
 */

class tablicaTest: public Tablica, public Interfejs {
      void Wyswietl();
      int Ilosc;

  
   public:
      double * Czasy;
      void przygotuj(const char * iloscElementow);
      void  wykonaj();
      tablicaTest();
      
};

#endif
