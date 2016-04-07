#ifndef LIST_HH
#define LIST_HH

#include "tab.hh"

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
  class outOfRangeException{};  
  int search (T element);
};	   
template<class T> List<T>::List() {
  lista = new Tablica <T>;
}
template<class T>List<T>::~List() {
  delete[] lista;
}

template<class T> void List<T>::add (T element, int position) {
  try{
    if (position < 1 || position > lista->rozmiar()) {
      throw outOfRangeException();
	}
    lista->dodaj(element, position);
  }
  catch (outOfRangeException) {
    std::cout <<"Wyjście poza zakres listy w czasie dodawania" << std::endl;
  }
}

template<class T>void List<T>::remove (int position) {
    try{
      if (position < 1 || position > lista->rozmiar()) {
	throw outOfRangeException();
      }
      lista->usun(position);
    }
    catch (outOfRangeException) {
      std::cout <<"Wyjście poza zakres listy w czasie usuwania" << std::endl;
    }
  }

template<class T>T List<T>::get (int position) {
  try{
    if (position < 1 || position > lista->rozmiar()) {
      throw outOfRangeException();
    }
    return lista->wyswietl(position);    }
  catch (outOfRangeException) {
    std::cout <<"Wyjście poza zakres listy w czasie wyswietlania" << std::endl;
  }
}

template<class T> int List<T>::size () {
      return lista->rozmiar();
}

template<class T> int List<T>::search (T element) {
  int position;
  for (int a=0; a<lista->rozmiar(); a++) {
    T checker = get(a);
    if (element==checker){
      position=a+1;
     }
  }
  if (position>0) {
       return position;
  } else return 0;
}



#endif
