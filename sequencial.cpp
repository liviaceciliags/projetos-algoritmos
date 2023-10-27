#include <iostream>

using namespace std;

// Retorna a posição em que X foi encontrado no vetor
// Retorna -1 se X não for encontrado
int sequencial( int num[], int X, int N)
{
	bool achou; // var aux p/ busca
	int i;
	int v;
	achou = false;

	// 4 - verificando a existencia do elemento
	for (i = 0; i < N ; i++)
		if (X == num[i])
		{
			v = i;
			achou = true;
		}
	if (achou)
		return v + 1;
	else
		return -1;
}

int main ()
{
	int N;
	int X;
	int num[100];
	int pos; //posição
	int aux = 0;
	int valor;


	//1 - Ler N elementos e armazenar no vetor
	do
	{
		//cout << "Insira os valores" << endl;
		cin >> valor;
		if (valor != -1)
			num[aux] = valor;
		aux ++;
	}
	while(valor != -1);

	N = aux;


	//3 - buscando e elemento x a ser encontrado
	//cout << "Buscar: " << endl;
	cin >> X;

	// 4 - procurando X no vetor
	pos = sequencial(num, X, N);

	if (pos == -1)
		cout << X << " nao encontrado" << endl;
	else
		cout << X << " encontrado na posicao " << pos << endl;

	return 0;
}
