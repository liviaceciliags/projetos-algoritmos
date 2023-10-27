#include <iostream>

using namespace std;

int sequencial( int vetor[], int X, int N)
{
	int i;
	int v;
	for (i = 0; i < N ; i++)
		if (X == vetor[i])
			v = i;
		return v;
}

int main ()
{
	int vetor[100];
	int valor;
	int aux = 0;
	int N;
	int X; 
	int pos;

	do
	{
		cin >> valor;
		if (valor != -1)
			vetor[aux] = valor;
		aux ++;
	}
	while(valor != -1);
	
	N = aux; 

	cin >> X; 
	
	pos = sequencial( vetor, X, N);
	
	if (pos == -1)
		cout << X << " nao encontrado" << endl;
	else 
		cout << X << " encontrado na posicao " << pos << endl;
	
	return 0;
}
