#include "quicksort.hh"

using namespace std;

void QuickSort(List <int> *lista, int lewy, int prawy)
{	
	int i = lewy;
	int j = prawy;
	int index = (prawy + lewy)/2;
	int pivot = lista->get(index);
	bool wyjdz = 0;
	cout<<"pivot = "<<pivot<<endl;

	do
	{
		while(i<index)
		{
			if(lista->get(i) > pivot)
			{
				lista->add(lista->get(i), prawy+1);
				index--;
				lista->remove(i);
			}
			else i++;
		}
		
		while(j>index)
		{
			if(lista->get(j) < pivot)
			{
				lista->add(lista->get(j), index);
				index++;
				lista->remove(j+1);
			}
			else j--;
		}
		
		
		cout<<"i="<<i<<"   j="<<j<<"     index="<<index<<endl;
		cout<<"lewy="<<lewy<<"   prawy="<<prawy<<endl;
		//lista->wypisz();
		//getchar();
		if((i==index) && (j==index)) wyjdz = 1;
	}while(!wyjdz);

	if(prawy-lewy>=1)
	{
		cout<<"JESTEM"<<endl<<endl;
		if(j>lewy) QuickSort(lista, lewy, j-1);
		if(i<prawy) QuickSort(lista, i+1, prawy);
	}
}