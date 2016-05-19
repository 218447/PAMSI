#ifndef BRANCHANDBOUND_HH
#define BRANCHANDBOUND_HH

#include "IGraph.hh"

struct treeNode {
private:
  treeNode* father;
  treeNode* sons;
  int amountOfSons;
  int numberOfVertex;  //który to wierzcholek
public:
  void setFather (treeNode* Father) {
    father = Father;
  };
  void setSons (treeNode* Sons, int howMany) {
    amountOfSons = howMany;
    sons = new treeNode [amountOfSons];
    for (int i = 0; i<amountOfSons; i++) {
      sons[i] = Sons[i];
    }
  };
  ~treeNode () {
    delete sons;
  };
  void setVertex (int& Value) {
    numberOfVertex = value;
  };
};

class Graph_BAB: IGraph {
private:
  int ** matrix; //macierz sasieddztwa
  int amountOfMatrix = 0;
  int amountOfEdges = 0;cd 

public:
  Graph_BAB (int amountOfEdges);
  ~Graph_BAB ();
  void addVertex (int Vertex);
  void addEdge (int vertex1, int vertex2);
  int* getNeighbours (int Vertex);
  bool isConnected (int vertex1, int vertex2);
  int amountOfNeighbours (int Vertex);
  int* BAB (int vertex1, int vertex2); //algorytm Branch And Bound
};
  std::istream & operator >> (std::istream & in, Graph_DFS* graf); 
  
#endif
