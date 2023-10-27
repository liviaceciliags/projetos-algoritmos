#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
	int i, j; // contadores
	int chave;
	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] < chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}

int main ()
{
	int x[];
	int tamanho = 0;
	int nPassos;
	do
	{
		cin >> num;
		if (num != 0)
		{
			x[tamanho] = num;
			tamanho++;
		}
	}
	while(num != 0);

	insercaoDireta(vetor, tamanho);
	
	for (i = 0; i < tamanho; i++)
		cout << vetor[i] << " ";
	return 0;
}
