#ifndef "TREE_HH"
#define "TREE_HH"

#include "tab.hh"
#include <fstream>
#include <iostream>

class Tree {

private:
  Tablica *Tree;

public:
  Tree ();
  ~Tree();
  void add(int element);
  int find(int searched);
  bool operator >> (const char* name);
};

#endif

