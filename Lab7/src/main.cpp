#include <iostream>
#include "Graph.hh"
#include "queue.hh"
#include "stoper.hh"

using namespace std;

int main(int argc, char* argv[]) {
  Stoper stoper;
  string start, stop;
  double* czas;

  Graph* graf = new Graph;
 
  stoper.start();
  graf->branchAndBound(rand()%10, rand()%10);
  stoper.stop();
  
  czas = stoper.wyswietl();
  cout << "Czas przeszukiwania wynosi: " <<czas[0] << endl; 
}
