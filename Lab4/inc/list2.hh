#ifndef LIST_HH
#define LIST_HH

#include "tab.hh"
#include "listElement.hh"
#include <string>

/* Klasa implementuj±ca listê */

template <class T> class List {

private:
  Tablica <T> *lista;

public:
  void add (T element, int position);  // throws outOfRangeException;
  void remove (int position);
  T get (int position);
  int size ();
  List();
  ~List(); 
  int search (const std::string& key);
  class outOfRangeException{};
};	   
template<class T> List<T>::List() {
  lista = new Tablica <T>;
}
template<class T>List<T>::~List() {
  delete[] lista;
}

template<class T> void List<T>::add (T element, int position) {
    lista->dodaj(element, position);
}

template<class T>void List<T>::remove (int position) {
  lista->usun(position);
}

template<class T>T List<T>::get (int position) {
  return lista->wyswietl(position);
}

template<class T> int List<T>::size () {
      return lista->rozmiar();
}

template<class T> int List<T>::search (const std::string& key) {
  for (int a=0; a<lista->rozmiar(); a++) {
    listElement checker = get(a);
    if (key==checker.getKey()){
      return checker.getValue;
    }
  }
}

#endif
