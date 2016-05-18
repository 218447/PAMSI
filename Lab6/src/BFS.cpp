#include "BFS.hh"

Graph_BFS::Graph_BFS (int amountOfVertices) {
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


Graph_BFS::~Graph_BFS() {
  for(int i = 0; i < amountOfMatrix; i++) {
    delete [] matrix[i];
  }
  delete [] matrix;
  delete [] listOfVisitors;
}

void Graph_BFS::addVertex (int Vertex) {
    }

void Graph_BFS::addEdge (int vertex1, int vertex2) {
  matrix[vertex1][vertex2] = true;
   matrix[vertex2][vertex1] = true;
  
}

int* Graph_BFS::getNeighbours (int Vertex) {
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

bool Graph_BFS::isConnected (int vertex1, int vertex2) {
  bool checker = matrix[vertex1][vertex2];  
  return checker;
}

std::istream & operator >> (std::istream & in, Graph_BFS* graf) {
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

int Graph_BFS::amountOfNeighbours (int Vertex) {
  int index = 0;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[Vertex][i] == true) {
      ++index;
    }
  }
  return index;
}

void  Graph_BFS::BFS (int Vertex) {
  Queue<int>* kolejka = new Queue<int>;
  
  kolejka->enqueue(Vertex);
  
  listOfVisitors[Vertex].setVisited();      // Wierzcho³ek v oznaczamy jako odwiedzony

  while(kolejka->size()>0) {
   
    int graphElement = kolejka->dequeue();             // Usuwamy z kolejki odczytane v
    
   for(int i = 0; i <amountOfNeighbours(graphElement) ; i++)
     if((matrix[graphElement][i] == 1) && !listOfVisitors[i].getVisited())
      {
        kolejka->enqueue(i); //umieszczanie nieodwiedzonych sasiadow
	graphElement=kolejka->dequeue();
	listOfVisitors[i].setVisited(); // i oznaczenie jako odwiedzonych
      }
  }
}
