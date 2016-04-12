#include "list.hh"
#include <cstdlib>
#include "stoper.hh"
#include "quicksort.hh"

using namespace std;

int main () {
  Stoper *stoper = new Stoper;
  List<int> *lista = new List<int>;
  srand (time(NULL));
  int ilosc=1000000;
  for (int a=0; a<ilosc; a++) {
    lista->add(rand() % ilosc, a);
  }
	
	for(int i=0;i<lista->size(); i++)
		cout<<i+1<<". "<<lista->get(i)<<endl;
	
  stoper->start();
	QuickSort(lista, 0, lista->size()-1);
  stoper->stop();
	
	
	for(int i=0;i<lista->size(); i++)
		cout<<i+1<<". "<<lista->get(i)<<endl;
	
  cout << "Czas przeszukiwania wynosi: " << *stoper->wyswietl() << "ms" << endl;
}

  
