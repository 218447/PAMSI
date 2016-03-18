#include "stoper.hh"

Stoper::Stoper() {
  liczbaPomiarow=0;
}

void Stoper::start() {
  ++liczbaPomiarow;
  poczatek = clock();
}

void Stoper::stop() {
  koniec=clock();
  
  czas[liczbaPomiarow-1]=(double)(koniec-poczatek)/(double)(CLOCKS_PER_SEC);
}

double Stoper::wyswietl() {
  if (czas) {
    for (int i=0; i<=liczbaPomiarow; i++) {
       return czas[i];
    }
  }
}
