#include "Graph.hh"

Graph::Graph (int amountOfVertices) {
  amountOfMatrix = amountOfVertices;
  matrix = new bool* [amountOfMatrix];    // Tworzymy tablicê wska¼ników

  for(int i = 0; i < amountOfMatrix; i++)
    matrix[i] = new bool [amountOfMatrix]; // Tworzymy wiersze

  // Macierz wype³niamy zerami
  
  for(int i = 0; i < amountOfMatrix; i++) {
    for(int j = 0; j < amountOfMatrix; j++) {
      matrix[i][j] = false;
    }
  }
  }


Graph::~Graph() {
  for(int i = 0; i < amountOfMatrix; i++) {
    delete [] matrix[i];
  }
  delete [] matrix;
}

void Graph::addVertex (int Vertex) {
    }

void Graph::addEdge (int vertex1, int vertex2) {
  matrix[vertex1][vertex2] = true;
   matrix[vertex2][vertex1] = true;
  
}

int* Graph::getNeighbours (int Vertex) {
  int Neighbours[1000];
  int counter = 0;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[Vertex][i] == true) {
      Neighbours[counter] = i;
      ++counter;
    }
  }
  return Neighbours;
}

bool Graph::isConnected (int vertex1, int vertex2) {
  bool checker = matrix[vertex1][vertex2];  
  return checker;
}

std::istream & operator >> (std::istream & in, Graph* graf) {
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
  
