#ifndef TAB_HH
#define TAB_HH

#include <cstdlib>
#include <ctime>
#include <iostream>

/* Deklaracja klasy tablica, przechowującej dynamicznie obiekty typu integer.
Zmienne prywatne:
wielkosc - wielkosc tablicy, definiowana w konstruktorze
zajete - liczba wykorzystanych komorek tablicy
*tab - zmienna przechowujaca komorki tablicy

Metody:

Tablica - konstruktor
~Tablica - destruktor
dodajElem - metoda dodajaca jeden element do tablicy
rozmiar - zwraca rozmiar tablicy
*/

class Tablica {
   private:
     int wielkosc;   //wielkosc tablicy   
     int zajete;     //liczba wykorzystanych komorek tablicy
     int* tab;       //zmienna przechowujaca komorki tablicy
 
   public:
     Tablica (const int &rozmiar);         //konstruktor tablicy
     ~Tablica ();                          //destruktor tablicy
     void dodajElem (const int &elem);     //dodawanie elementu, powiekszanie o 1 w przypadku braku wolnego miejsca
     void dodajElemPlus (const int &elem); //dodawanie elementu, powiekszanie o 100 w przypadku braku wolnego miejsca
     void dodajElemRazy (const int &elem); //dodawanie elementu, powiekszanie razy 2 w przypadku braku wolnego miejsca
     int rozmiar ();                       //zwraca wielkosc tablicy

};

#endif
