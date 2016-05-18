#include <iostream>
#include <fstream>
#include "BFS.hh"
#include "stoper.hh"

// Realizacja przeszukania grafu BFS - zaczynamy od wierzcho³ka 2.
 

using namespace std;

int main() {
  Graph_BFS* graf = new Graph_BFS(1000000);
  int* neighbours;
  Stoper stoper;
  std::ifstream file ("Graf_1000000"); 
  double *czas;

  file >> graf;

  std::cout << "Graf wczytano" << std::endl;

  stoper.start();
  graf->BFS(2);
  stoper.stop();

  czas = stoper.wyswietl();

  std::cout << "Czas przeszukiwania BFS wynosi: " << czas[0] << std::endl;
  
}
