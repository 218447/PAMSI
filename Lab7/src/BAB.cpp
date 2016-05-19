#include "BranchAndBound.hh"

Graph_BAB::Graph_BAB (int amountOfVertices) {
  amountOfMatrix = amountOfVertices;
  matrix = new int* [amountOfMatrix];    // tworzy tablicê wska¼ników
  
  for(int i = 0; i < amountOfMatrix; i++)
    matrix[i] = new int [amountOfMatrix]; // tworzy wiersze
  
  // wypelnianie macierzy zerami
  
  for(int i = 0; i < amountOfMatrix; i++) {
    for(int j = 0; j < amountOfMatrix; j++) {
      matrix[i][j] = 0;
    }
  }
}


Graph_BAB::~Graph_BAB() {
  for(int i = 0; i < amountOfMatrix; i++) {
    delete [] matrix[i];
  }
  delete [] matrix;
}

void Graph_BAB::addVertex (int Vertex) {
}

void Graph_BAB::addEdge (int vertex1, int vertex2, int weight) {
  matrix[vertex1][vertex2] = weight;
  matrix[vertex2][vertex1] = weight; 
}

int* Graph_BAB::getNeighbours (int Vertex) {
  int* Neighbours = new int[amountOfNeighbours(Vertex)];
  int counter = 0;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[Vertex][i] > 0) {
      Neighbours[counter] = i;
      ++counter;
    }
  }
  return Neighbours;
  delete [] Neighbours;
}

bool Graph_BAB::isConnected (int vertex1, int vertex2) {
  bool checker;
  if (matrix[vertex1][vertex2]>0) {
    checker = true;
  } else checker = false;
    return checker;
}

std::istream & operator >> (std::istream & in, Graph_BAB* graf) {
  int vertex1, vertex2, weight;

  while (true) {
    in >> vertex1 >> vertex2 >> weight;
    if (in.good()) {
      graf->addEdge (vertex1, vertex2, weight);
    } else {
      break;
      }       
  } 
  return in;
}

int Graph_BAB::amountOfNeighbours (int Vertex) {
  int index = 0;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[Vertex][i] > 0) {
      ++index;
    }
  }
  return index;
}

void Graph_BAB::BAB (int vertex1, int vertex2) {
  int distance;
  Queue *kolejka = new Queue;
  treeNode Tree;
  int* neighbours;
  treeNodes*;
  
  Tree.setFather(null);
  Tree.setVertex(vertex1);
  
  neighbours = getNeighbours(vertex1);

  for (int i : neighbours) {
    kolejka.enqueue(neighbours[i]);
    for (int j : neighbours) {
      kolejka.dequeue
    
}
