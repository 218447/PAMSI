#ifndef TAB_HH
#define TAB_HH

#include <cstdlib>
#include <ctime>
#include <iostream>

/* Deklaracja klasy tablica, przechowującej dynamicznie obiekty typu integer.
Zmienne prywatne:
wielkosc - wielkosc tablicy, definiowana w konstruktorze
zajete - liczba wykorzystanych komorek tablicy
tab - zmienna przechowujaca komorki tablicy

Tablica - konstruktor
~Tablica - destruktor
dodajElem - metoda dodajaca jeden element do tablicy
*/

class Tablica {
   private:
     int wielkosc;
     int zajete;
     int* tab;
 
   public:
     Tablica (const int &rozmiar);
     ~Tablica ();
     void dodajElem (const int &elem);
     void dodajElemPlus (const int &elem);
     void dodajElemRazy (const int &elem);
     int rozmiar ();

};

#endif
