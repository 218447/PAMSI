#include "Graph.hh"

Graph::Graph (char* inputGraph) {

  std::ifstream file (inputGraph);
  int amountOfVertices;
  int amountOfEdges;
  int vertex1;
  int vertex2;
  
  file >> amountOfVertices;
  file >> amountOfEdges;

  matrixOfAdjacency = new Tablica<int> (amountOfVertices-1)[amount of Edges-1];
  
  while(vertex1 || vertex2) {
    file >> vertex1;
    file >> vertex2;

    addEdge(vertex1, vertex2);

  }
}

Graph::~Graph() {
  delete []matrixOfAdjacency;
}

void Graph::addVertex (int Vertex) {
  List<int>* vertex = new List<int>();
  matrixOfAdjacency->dodajElemRazy(vertex);
    }

void Graph::addEdge (int vertex1, int vertex2) {
  matrixOfAdjacency[vertex1]->add (vertex2, matrixOfAdjacency->getSize()+1);
  matrixOfAdjacency[vertex2]->add (vertex1, matrixOfAdjacency->getSize()+1);
}

int* Graph::getNeighbours (int Vertex) {
  int Neighbours = matrixOfAdjecency[Vertex]->getSize();

  for (int i=0; i< matrixOfAdjecency->getSize(); i++) {
    Neighbours[i] = matrixOfAdjecency[Vertex]->get(i);
  }
  return Neighbours;
}

bool isConnected (int vertex1, int vertex2) {
  int checker = martixOfAdjecency[vertex1]->search(vertex2);
  if (vertex2==checker) {
    return 1;
  } else return 0;
}
