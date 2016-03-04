#ifndef LAB_HH
#define LAB_HH

#include <iostream>

/* Klasa tablica implementuje tablice dynamiczna.

Metody:
Konstruktor
Metoda dodajaca element na koniec tablicy

Elementy:
indeks (public)
tablica z elementami
*/

class Tablica {
private:
  int indeks;                  //liczba elementów tablicy
  public:
  int *liczbaEl;               //tablica z elementami
  Tablica (int &liczba);       //konstruktor
  void dodajEl (int &element); //metoda dodajaca element na koniec tablicy
};

#endif
