#include "Graph.hh"

using namespace std;

Graph::Graph () {
  rozmiar = 1000;
  matrix = new int* [rozmiar];    // Tworzymy tablicê wska¼ników

  for(int i = 0; i < rozmiar; i++)
    matrix[i] = new int [rozmiar]; // Tworzymy wiersze
  
  // Macierz wype³niamy losowymi liczbami
  
  for(int i = 0; i < rozmiar; i++) {
    for(int j = 0; j < rozmiar; j++) {
      matrix[i][j] = rand() % 10;
      matrix[j][i] = matrix[i][j];
    }
  }
}

Graph::~Graph() {
  for(int i = 0; i < amountOfMatrix; i++) {
    delete [] matrix[i];
  }
  delete [] matrix;
}

void Graph::addVertex (std::string Vertex) {
	if(licznik > rozmiar)
	{
		rozmiar *= 10;
		std::string *temp = new std::string [rozmiar];
		for(int i=0; i<licznik; i++)
			temp[i] = listOfVertices[i];		//skopiowanie tablicy do wiekszej
		delete [] listOfVertices;
		listOfVertices = temp;
		
		int **newMatrix = new int* [rozmiar];
		for(int i=0; i<licznik; i++)
		{
			newMatrix[i] = new int[rozmiar];
		}																	//alokacja nowej macierzy sasiedztwa
		
		for(int i=0; i<rozmiar; i++)
			for(int j=0; j<rozmiar; j++)
				newMatrix[i][j] = -1;
		
		for(int i=0; i<rozmiar; i++)
			for(int j=0; j<rozmiar; j++)
				newMatrix[i][j] = matrix[i][j];		//skopiowanie starej macierzy do nowej
			
		for(int i=0; i<rozmiar; i++)
			delete [] matrix[i];
			
		delete [] matrix;				//dealokacja pamieci po starej macierzy
		matrix = newMatrix;
	}
	listOfVertices[licznik++] = Vertex;		//dodanie nowego wierzcholka do tablicy
}  

void Graph::addEdge (int vertex1, int vertex2, int distance) {
  matrix[vertex1][vertex2] = distance;
   matrix[vertex2][vertex1] = distance;
  
}
/*
List Graph::getNeighbours (int Vertex) {
   int numberOfVertex = Vertex;
  List Neighbours;
  for (int i=0; i<amountOfMatrix; i++) {
    if (matrix[numberOfVertex][i] > 0) {
      Neighbours.add(i, Neighbours.size()+1);
    }
  }
  return Neighbours;
  }
*/
bool Graph::isConnected (int vertex1, int vertex2) {
  bool checker = false;
  if (matrix[vertex1][vertex2] > 0){  
    checker = true;
    }

  return checker;
}

int Graph::getEdge (int vertex1, int vertex2) {
    int Number1 = vertex1;
    int Number2 = vertex2;
    
    return matrix[Number1][Number2];
  }

int Graph::branchAndBound (int start, int stop) {
  
  int best = 1000;
  int extensions = 0;
  int son = 0, father = 0, distance = 0;
  Queue<int>* fathers = new Queue<int>();
  Queue<int>* sons = new Queue<int>();
  Queue<int>* distances = new Queue<int>();
  sons->enqueue (start);
  fathers->enqueue(start);
  distances->enqueue(0);
  while(fathers->size()>0)
  {
    son = sons->dequeue();
    distance = distances->dequeue();
    father = fathers->dequeue();
    for (int i = 0; i<1000; ++i)
    {
      if((matrix[son][i] > 0)&&(i!=father))
      {
        if(distance < best)
        {
          extensions++;
          sons->enqueue(i);
          distances->enqueue(matrix[i][son]+distance);
          fathers->enqueue(son);
          if ((i == stop) && (matrix[i][son]+distance < best )) {
             best = distance + matrix[i][son];
          }
        }
      }
    }
  }
  cout << "Rozwiniecia: "<< extensions << endl;

  return best;
 
}

int Graph::branchAndBoundWithExtendedList(int start, int stop) {
//branch&branchAndBoundWithExtendedList
int best = 1000;
int extensions=0;
int son=0, father=0, distance=0;
Queue<int>* fathers = new Queue<int>();
Queue<int>* sons = new Queue<int>();
Queue<int>* distances = new Queue<int>();
sons -> enqueue (start);
fathers -> enqueue(start);
distances -> enqueue(0);
 
 int kopiaMacierzy[100][100];
 for (int i = 0; i < 100; i++) {
   for (int j = 0; j < 100; j++) {
     kopiaMacierzy[i][j] = matrix[i][j];
     kopiaMacierzy[j][i] = matrix[j][i];
   }
 }
      
while(fathers->size()>0) {
  son = sons -> dequeue();
  distance = distances -> dequeue();
  father = fathers ->dequeue();
  for (int i = 0; i< 100; ++i) {
    if((kopiaMacierzy[son][i] > 0)&&(i!=father)) {
      if(distance < best) {
        extensions++;
        sons -> enqueue(i);
        distances-> enqueue(matrix[i][son]+distance);
        fathers -> enqueue(son);
        if ((i == stop) && (matrix[i][son]+distance < best )) {
	  best = distance + matrix[i][son];
        }
        if (i!=stop) {
          kopiaMacierzy[son][i]=0; kopiaMacierzy[i][son]=0;
        }
      }
    }
  }
 }
 cout << "Rozwiniecia: "<< extensions << endl;
  
 return best;
}
