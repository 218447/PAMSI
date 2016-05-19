#ifndef DFS_HH
#define DFS_HH

#include "IGraph.hh"
#include "elementOfGraph.hh"
#include <fstream>

class Graph_DFS: public IGraph {
  
private:
  elementOfGraph* listOfVisitors;
  bool ** matrix; //macierz sasiedztwa
  int amountOfMatrix = 0; // 1, bo licznik tablicy zaczyna siê od 1.
  int amountOfEdges = 0;
    
public:
  Graph_DFS (int amountOfEdges);
  ~Graph_DFS ();
  void addVertex (int Vertex);
  void addEdge (int vertex1, int vertex2);
  int* getNeighbours (int Vertex);
  bool isConnected (int vertex1, int vertex2);
  int amountOfNeighbours (int Vertex);
  void DFS (int Vertex);
};
  std::istream & operator >> (std::istream & in, Graph_DFS* graf); 
  
#endif
