#ifndef BFS_HH
#define BFS_HH

#include "IGraph.hh"
#include "queue.hh"

struct elementOfGraph {
 private:
  int value;
  bool visited = false;
 public:
  void setValue (int newValue) {
  value = newValue;
};
  int getValue () {
    return value;
  };
  void setVisited () {
    visited = true;
  };
  void setUnvisited () {
    visited = false;
  };
  bool getVisited () {
    return visited;
  };
};

class Graph_BFS : IGraph {

private:
  elementOfGraph* listOfVisitors;
  bool ** matrix; //macierz sasiedztwa
  int amountOfMatrix = 0; // 1, bo licznik tablicy zaczyna siê od 1.
  int amountOfEdges = 0;
    
public:
  Graph_BFS (int amountOfEdges);
  ~Graph_BFS ();
  void addVertex (int Vertex);
  void addEdge (int vertex1, int vertex2);
  int* getNeighbours (int Vertex);
  bool isConnected (int vertex1, int vertex2);
  int amountOfNeighbours (int Vertex);
  void BFS (int Vertex);
};
  std::istream & operator >> (std::istream & in, Graph_BFS* graf); 
  
#endif
