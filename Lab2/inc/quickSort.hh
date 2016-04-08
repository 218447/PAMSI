#include "list.hh"

void QuickSort(List<int> *lista, int lewy, int prawy)
{
	int pivot = lista->get((lewy + prawy)/2);
	int i = lewy;
	int j = prawy;
	
	do
	{
		while(lista->get(i) < pivot) i++;
		while(lista->get(j) > pivot) j--;
		if(i<=j)
		{
			int temp = lista->get(i);
			lista->remove(i);
			lista->add(lista->get(j), i);
			lista->remove(j);
			lista->add(temp, j);
			i++; j--;
		}
	}while(i<=j);
	
	if(j>lewy) QuickSort(tablica, lewy, j);
	if(i<prawy) QuickSort(tablica, i, prawy);
	
}