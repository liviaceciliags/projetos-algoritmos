//Alocação dinâmica de memória 2

#include <iostream>
#include <iomanip>
using namespace std;

struct dado 
{
	int n1;
	int n2;
	int n3;
	int n4;
	double media;	
};

int main ()
{
	dado *info = NULL;
	
	

	int N;
	int i;
	int soma  = 0;
	
	cout << "N: " << endl;
	cin >> N;
	
	info = new dado[N];
	
	for (i = 0; i < N; i++)
	{
		//cout << "N1: " << endl;
		cin >> info[i].n1;
		//cout << "N2: " << endl;
		cin >> info[i].n2;
		//cout << "N3: " << endl;
		cin >> info[i].n3;
		//cout << "N4: " << endl;
		cin >> info[i].n4;
		
		soma = soma + info[i].n1 + info[i].n2 + info[i].n3 + info[i].n4;
		
	}
	
	info[N].media = (1.0)*soma/(4*N);
	
	cout << fixed << setprecision(2) << info[N].media << endl;
	
	delete info;
	
	
	return 0;
}