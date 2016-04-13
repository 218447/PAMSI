#include <iostream>
#include "list.hh"

using namespace std;

int main()
{

	List <int> *lista = new List <int>;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		lista->add(i, i);
	
	lista->add(22, 2);
	
	for(int i=1; i<=n; i++)
		cout<<i<<". "<<lista->get(i)<<endl;
	
	
}