#include <iostream>
#include <fstream>
//#include "BFS.hh"
#include "DFS.hh"
#include "stoper.hh"

// Realizacja przeszukania grafu BFS - zaczynamy od wierzcho³ka 2.
// Realizacja przeszukania grafu DFS - zaczynamy od wierzcho³ka 4
// Dla obu realizacji przeszukania, krawêdzi jest 30% wiêcej ni¿ wierzcho³ków

using namespace std;

int main() {
  //Graph_BFS* graf = new Graph_BFS(1000000);
  Graph_DFS* graf = new Graph_DFS(1000000);
  //int* neighbours; // zmienna do zdobywania sasiadow wierzcholka
  Stoper stoper;
  std::ifstream file ("Graf_1000000"); 
  double *czas;

  file >> graf;

  std::cout << "Graf wczytano" << std::endl;

  stoper.start();
  graf->DFS(4);
  stoper.stop();

  czas = stoper.wyswietl();

  //std::cout << "Czas przeszukiwania BFS wynosi: " << czas[0] << std::endl;
  std::cout << "Czas przeszukiwania DFS wynosi: " << czas[0] << std::endl;
  
}
