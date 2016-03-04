#include "lab.hh"

Tablica::Tablica (int &liczba) {
    this->indeks=liczba;
    liczbaEl=new int[liczba];
}

void Tablica::dodajEl (int &element) {
  int k=0;       // element sprawdzajacy wymiar tablicy
    for (int i=0; i<=this->indeks; ++i) {
       if (liczbaEl[i]==NULL){
	 liczbaEl[i]=element;
       }else ++k;
    }
    if (k>=this->indeks) { //kopiowanie tablicy do wiekszej, realokacja pamieci
      int *nowaTab = new int[k+1];
      nowaTab=liczbaEl;
      nowaTab[k+1]=element;
      delete [] this->liczbaEl;
      this->liczbaEl = new int[k+1];
      liczbaEl=nowaTab;
      delete []nowaTab;
    }
}
