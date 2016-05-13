#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char getRandom() {
    return alphanum[rand() % stringLength];
}

int main() {
    srand(time(NULL));
    fstream plik( "Aso_1000000000", ios::out );
    string cos = " ";

    if( plik.good() )
    {
        for( int i = 1; i <= 1000000000; i++ ) {
	  for (int j=0; j<=20; j++) {
	    cos += getRandom();
	  }
	  std::string linijka = std::to_string(rand()%1000) + cos;
	  if (i == 5) {
	    linijka = std::to_string(rand()%1000) + " Kowalski";
	  }

	  plik << linijka  << std::endl;
	  cos = " ";
        }
        plik.close();
    }
    return 0;
}
