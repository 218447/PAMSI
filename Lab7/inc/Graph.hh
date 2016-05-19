#ifndef GRAPH_HH
#define GRAPH_HH

#include "IGraph.hh"
#include <fstream>
#include <iomanip>
class Graph : public IGraph {

private:
  bool ** matrix;
  int amountOfMatrix = 0; // 1, bo licznik tablicy zaczyna siê od 1.
  int amountOfEdges = 0;
  
public:
  Graph (int amountOfEdges);
  ~Graph ();
  void addVertex (int Vertex);
  void addEdge (int vertex1, int vertex2);
  int* getNeighbours (int Vertex);
  bool isConnected (int vertex1, int vertex2);
};
  std::istream & operator >> (std::istream & in, Graph* graf); 

  
#endif
