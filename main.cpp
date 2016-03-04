#include "lab.hh"
#include <ctime>   //biblioteka mierzaca czas
/* program sprawdzajacy poprawne dzialanie tablicy dynamicznej, nalezy stworzyc tablice 1 lub 2 elementowa
*/

int main() {

  int rozmiar;
  clock_t s, f;    //zmienne typu clock
  double czas=0;   //zmienna przechowujaca czas wykonania programu
  int a=8;
  int b=3;
  int c=5;
 
  std::cout << "Podaj rozmiar tablicy: "<< std::endl;
  std::cin >> rozmiar;
  
  s = clock();
  
  Tablica *tab =  new Tablica(rozmiar);
  tab->dodajEl(a);
  tab->dodajEl(b);
  tab->dodajEl(c);

  f = clock();
  czas = (double)(f - s) / (double)(CLOCKS_PER_SEC); //konwersja na sekundy

  std::cout << "Tablica: " << tab->liczbaEl[0] << tab->liczbaEl[1] << tab->liczbaEl[2] << std::endl;
  std::cout << "Czas wykonania: " << czas << std::endl;
}




