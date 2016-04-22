#ifndef TREE_HH
#define TREE_HH

#include "tab.hh"
#include <fstream>
#include <iostream>

class Tree {

private:
  Tablica<int> *tree;

public:
  Tree ();
  ~Tree();
  void add(int& element);
  int find(const int& searched);
};

std::istream &operator >> (std::istream& in, Tree* drzewo);

#endif

