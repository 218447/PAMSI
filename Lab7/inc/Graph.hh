#ifndef GRAPH_HH
#define GRAPH_HH

#include "IGraph.hh"
#include <fstream>
#include <iomanip>


class Graph : public IGraph {

private:
  int ** matrix;   //macierz sasiedztwa, poczatkowy rozmiar 100x100
  std::string *listOfVertices;   //tablica z nazwami przystankow odpowiadajacymi indeksom macierzy sasiedztwa
  int amountOfMatrix = 1000;   //initialValue w konstruktorze
  int shortestPath;
	int licznik, rozmiar;		//zmienne informujace o ilosci przystankow oraz rozmiarze tablicy
  std::string toReturn[100];
  
  
public:
  Graph ();  //tworze graf, ktory na poczatku ma pojemnosc 100 wierzcholkow
  virtual ~Graph ();  //usuwam graf
  void listVertices();
  int branchAndBoundWithExtendedList(int start, int stop);
  void loadCoordinates();
  void addVertex (std::string Vertex); //dodaje wierzcholek do istniejacych (ewentualne powiekszenie tablic matrix i listOfVertices 
  void addEdge (int vertex1, int vertex2, int distance);  //dodaje krawedz doistniejacych
  //List getNeighbours (int Vertex);  //pobieram sasiadow wierzcholka
  bool isConnected (int vertex1, int vertex2);  //sprawdzam czy jest droga pomiedzy dwoa wierzcholkamie
  int getEdge (int vertex1, int vertex2);  //dostaje odleglosc miedzy dwoma wierzcholkami
  int branchAndBound (int start, int stop); //algorytm
  class Exception{};
}; 
  
#endif
