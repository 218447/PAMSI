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
  
  czas[liczbaPomiarow-1]=((double)(koniec-poczatek)/(double)(CLOCKS_PER_SEC))*1000;
}

double * Stoper::wyswietl() {
        return czas;
}
