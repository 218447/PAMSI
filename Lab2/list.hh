#ifndef LIST_HH
#define LIST_HH

#include "node.hh"

/* Klasa implementuj±ca listê */

template <class T>
class List {

private:
  Node <T> *head;

public:
  int add (T element, int position);
  void remove (int position);
  T get (int position);
  int size ();
  List();
  ~List();    
};	   

#endif
