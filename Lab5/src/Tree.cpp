#include "Tree.hh"

Tree() {
  Tree = new Tablica()<int>;
}

~Tree() {
  delete Tree;
}

void add (int& element) {
  if (Tree[0]=null) {
    Tree.dodaj(element, 0);
  } else {
    for (int i=0;i < Tree.rozmiar(); i++) {
      if (Tree[i]) {
	if (element < Tree[i]) {
	  Tree.dodaj(element, 2*i);
	} else {
	  Tree.dodaj(element, (2*i)+1 )
	    }
      }
    }
  }
}


int find (const int* searched) {
  bool found;
  int foundVerification = null;
  for (int i = 0; i < Tree.rozmiar() i || Tree[i] == searched ; ) {
    if (Tree[i] == searched) {
      found=true;
      foundVerification = Tree[i];
    }
    
    if (searched < Tree[i]) {
      i* = 2;
    } else {
      i = (i*2) + 1;
    }
  }
  if (found) {
  return foundVerification;
  } else return 0;
}

bool operator >> (const char* name) {
  ifstream file;
  int element;
  
  if (file.good() == true) {
    while (!file.fail() ) {
      file >> element;
      add(element);
    }
  }
  
}

