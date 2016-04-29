#include "Graph.hh"

Graph::Graph (char* inputGraph) {

  std::ifstream file (inputGraph);
  int element;
  int amountOfVertices;
  int amountOfEdges;
  int vertex1;
  int vertex2;
  
  file >> amountOfVertices;
  file >> amountOfEdges;

  listOfAdjacency = new Tablica [amountOfVertices-1];
  
  while(!END_OF_FILE) {
    file >> vertex1;
    file >> vertex2;

    listOfAdjacency->addEdge(vertex1, vertex2);

  }
}

void Graph::addVertex (int Vertex) {
  listOfAdjacency->dodajElemRazy(Vertex)
    }

void Graph::addEdge (int vertex1, int vertex2) {
  listOfAdjecency[vertex1]->add (vertex2, listOfAdjecency.getSize+1);
  listOfAdjecency[vertex2]->add (vertex1, listOfAdjecency.getSize+1);
}

int[] Graph::getNeighbours (int Vertex) {
  int Neighbours = listOfAdjecency[Vertex]->getSize();

  for (int i=0; i<listOfAdjecency->getSize(); i++) {
    Neighbours[i] = listOfAdjecency[Vertex]->get(i);
  }
  return Neighbours;
}

bool isConnected (int vertex1, int vertex2) {
  int checker = listOfAdjecency[vertex1]->search(vertex2);
  if (vertex2==checker) {
    return 1;
  } else return 0;
}
