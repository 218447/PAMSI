#include "Tree.hh"

Tree::Tree() {
  tree = new Tablica<int>;
}

Tree::~Tree() {
  delete tree;
}

void Tree::add (int& element) {
  if (tree==NULL) {
    tree->dodaj(element, 0);
  } else {
    for (int i=0;i < tree->rozmiar(); i++) {
      if (tree->wyswietl(i) != NULL) {
	if (element < tree->wyswietl(i) ) {
	  tree->dodaj(element, 2*i);
	} else {
	  tree->dodaj(element, (2*i)+1 );
	    }
      }
    }
  }
}


int Tree::find (const int& searched) {
  bool found;
  int foundVerification = NULL;
  for (int i = 0; i < tree->rozmiar() || tree->wyswietl(i) == searched ; ) {
    if (tree->wyswietl(i) == searched) {
      found=true;
      foundVerification = tree->wyswietl(i);
    }
    
    if (searched < tree->wyswietl(i)) {
      i *= 2;
    } else {
      i = (i*2) + 1;
    }
  }
  if (found) {
  return foundVerification;
  } else return 0;
}

std::istream &operator >> (std::istream& in, Tree* drzewo) {
  int element;
  
  while(in >> element) {
    drzewo->add(element);
  }
}

