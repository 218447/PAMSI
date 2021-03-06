#ifndef IGRAPH_HH
#define IGRAPH_HH

#include "tab.hh"

class IGraph {
public:
  virtual void addVertex (int Vertex) = 0;
  virtual void addEdge (int vertex1, int vertex2) = 0;
  virtual int* getNeighbours (int Vertex) = 0;
  virtual bool isConnected (int vertex1, int vertex2) = 0;
};

#endif
