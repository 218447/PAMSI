#include "DFS.hh"

Graph_DFS::Graph_DFS (int amountOfVertices) {
  amountOfMatrix = amountOfVertices;
  listOfVisitors = new elementOfGraph[amountOfMatrix];
  matrix = new bool* [amountOfMatrix];    // tworzy tablicê wska¼ników

  for(int i = 0; i < amountOfMatrix; i++)
    matrix[i] = new bool [amountOfMatrix]; // tworzy wiersze

  // wypelnianie macierzy zerami
  
  for(int i = 0; i < amountOfMatrix; i++) {
    for(int j = 0; j < amountOfMatrix; j++) {
      matrix[i][j] = false;
    }
  }
  }


Graph_DFS::~Graph_DFS() {
  for(int i = 0; i < amountOfMatrix; i++) {
    delete [] matrix[i];
  }
  delete [] matrix;
  delete [] listOfVisitors;
}

void Graph_DFS::addVertex (int Vertex) {
    }

void Graph_DFS::addEdge (int vertex1, int vertex2) {
  matrix[vertex1][vertex2] = true;
   matrix[vertex2][vertex1] = true;
  
}

int* Graph_DFS::getNeighbours (int Vertex) {
  int* Neighbours = new int[amountOfNeighbours(Vertex)];
  int counter = 0;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[Vertex][i] == true) {
      Neighbours[counter] = i;
      ++counter;
    }
  }
  return Neighbours;
  delete [] Neighbours;
}

bool Graph_DFS::isConnected (int vertex1, int vertex2) {
  bool checker = matrix[vertex1][vertex2];  
  return checker;
}

std::istream & operator >> (std::istream & in, Graph_DFS* graf) {
  int vertex1=1, vertex2=1;

  while (true) {
    in >> vertex1 >> vertex2;
    if (in.good()) {
      graf->addEdge (vertex1, vertex2);
    } else {
      break;
      }       
  } 
  return in;
}

int Graph_DFS::amountOfNeighbours (int Vertex) {
  int index = 0;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[Vertex][i] == true) {
      ++index;
    }
  }
  return index;
}

void Graph_DFS::DFS (int Vertex) {
  listOfVisitors[Vertex].setVisited();     // wêze³ odwiedzony
  
  // rekurencyjne odwiedzanie nieodwiedzonych s±siadów
  
  for(int i = 0; i < amountOfNeighbours(Vertex); i++)
    if((matrix[Vertex][i] == 1) && !listOfVisitors[i].getVisited()) {
      DFS(i);
    }
}
