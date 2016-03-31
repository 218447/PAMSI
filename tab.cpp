#include "tab.hh"

Tablica::Tablica (const int &rozmiar) {
  wielkosc=rozmiar;
  zajete=0;
  tab=new int[rozmiar];
}
Tablica::Tablica() {
  wielkosc=10;
  zajete=0;
  tab=new int[wielkosc];
}
Tablica::Tablica (const Tablica & tabl) {
  tab=new int[wielkosc];
  memcpy (tab, tabl.tab, wielkosc);
}
  

Tablica::~Tablica () {
  delete []tab;
}
void Tablica::Wyczysc () {
  delete []tab;
  int* nowaTab = new int[10];
  tab= nowaTab;
}
void Tablica::dodajElem (const int &elem) {
  ++zajete;
  if (zajete>wielkosc) {
    int* nowaTab = new int[zajete];
    wielkosc++;
    for (int i=0; i<=(zajete-2); i++) {
      nowaTab[i] = tab[i];
    }		
    nowaTab [zajete-1]=elem;

    delete []tab;
    tab = nowaTab;
  } else tab [zajete-1] = elem;
}
void Tablica::dodajElemPlus (const int &elem) {
  ++zajete;
  if (zajete>wielkosc) {
    int* nowaTab = new int[zajete+100];
    wielkosc+=100;
    for (int i=0; i<=(zajete-2); i++) {
      nowaTab[i] = tab[i];
    }
    nowaTab [zajete-1]=elem;
    delete []tab;
    tab = nowaTab;
  } else tab [zajete-1] = elem;
}
void Tablica::dodajElemRazy (const int &elem) {
  ++zajete;
  if (zajete>wielkosc) {
    int* nowaTab = new int[zajete*2];
    wielkosc*2;
    for (int i=0; i<=(zajete-2); i++) {
      nowaTab[i] = tab[i];
    }
    nowaTab [zajete-1]=elem;
    delete []tab;
    tab = nowaTab;
  } else tab [zajete-1] = elem;
}
  int Tablica::rozmiar() {
    return wielkosc;
  }
