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
  void addVertex (int Vertex);
  void addEdge (int vertex1, int vertex2);
  int* getNeighbours (int Vertex);
  bool isConnected (int vertex1, int vertex2);
};
  
#endif
