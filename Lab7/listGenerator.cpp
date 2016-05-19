#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    fstream plik( "Graf_1000000", ios::out );
    string cos = " ";

    if (plik.good() ) {
        for( int i = 1; i <= 1300000; i++ ) {
	  std::string linijka = std::to_string(rand()%1000000) + cos + std::to_string(rand()%10);
	 plik << linijka  << std::endl;
        }
        plik.close();
    }
    return 0;
}
