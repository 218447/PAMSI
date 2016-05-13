#include "tab.hh"
#include "list.hh"
#include <iostream>

int main () {
  Tablica<int>* tab1 = new Tablica<int>;
  Tablica<List<int>>* tab2 = new Tablica<List<int>>;

  tab1->dodajElemPlus(34);
  tab2[0].add(12);
}
