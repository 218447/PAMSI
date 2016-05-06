#include "Graph.hh"

Graph::Graph (char* inputGraph) {

  std::ifstream file (inputGraph);
  int amountOfVertices;
  int amountOfEdges;
  int vertex1;
  int vertex2;
  
  file >> amountOfVertices;
  file >> amountOfEdges;

  listOfAdjacency = new Tablica<List<int>> [amountOfVertices-1];
  
  while(vertex1 || vertex2) {
    file >> vertex1;
    file >> vertex2;

    addEdge(vertex1, vertex2);

  }
}

Graph::~Graph() {
  delete listOfAdjacency;
}

void Graph::addVertex (int Vertex) {
  List<int>* vertex = new List<int>();
  listOfAdjacency->dodajElemRazy(vertex);
    }

void Graph::addEdge (int vertex1, int vertex2) {
  listOfAdjacency[vertex1]->add (vertex2, listOfAdjacency->getSize+1);
  listOfAdjacency[vertex2]->add (vertex1, listOfAdjacency->getSize+1);
}

int* Graph::getNeighbours (int Vertex) {
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
