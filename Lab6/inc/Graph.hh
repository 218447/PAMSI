#ifndef GRAPH_HH
#define GRAPH_HH

#include "IGraph.hh"
#include <fstream>

class Graph : public IGraph {

private:
  Tablica<List<int>> * listOfAdjacency;

public:
  Graph (char* inputGraph);
  ~Graph ();
}
  
#endif
