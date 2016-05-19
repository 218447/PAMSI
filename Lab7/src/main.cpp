#include <iostream>
#include <fstream>
#include "BAB.hh"
#include "stoper.hh"

// Realizacja przeszukania grafu BFS - zaczynamy od wierzcho³ka 2.
// Realizacja przeszukania grafu DFS - zaczynamy od wierzcho³ka 4
// Dla obu realizacji przeszukania, krawêdzi jest 30% wiêcej ni¿ wierzcho³ków

using namespace std;

int main() {
  //Graph_BFS* graf = new Graph_BFS(1000000);
  Graph_BAB* graf = new Graph_BAB(10);
  //int* neighbours; // zmienna do zdobywania sasiadow wierzcholka
  Stoper stoper;
  std::ifstream file ("Graf_10"); 
  double *czas;

  file >> graf;

  std::cout << "Graf wczytano" << std::endl;

  stoper.start();
  graf->BAB(3, 8);
  stoper.stop();

  czas = stoper.wyswietl();

  std::cout << "Czas szukania najkrotszej sciezki w grafie miedzy wierzcholkami 3 i 8 wynosi: " << << czas[0] << std::endl;
  
}
