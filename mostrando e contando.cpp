#include <iostream>


using namespace std; 

void bubbleSort(int vetor[], int tamanho )
{
	int i, j;
	int trab;
	bool troca;
	int limite;
	int aux =0;
	troca = true;
	limite = tamanho -1; 
	while (troca)
	{
		troca = false;
		for (i= 0; i <limite; i++)
			if (vetor[i]> vetor[i+1])
			{
				trab = vetor [i];
				cout << "New trab:"<< trab << endl;
				vetor [i]= vetor [i+1];
				vetor [i+1] = trab;
				j = i;
				troca = true;
				aux++;
			}
		limite = j;
	}
	cout << "Contador:" << aux << endl;
}

int main()
{
	int vetor[10000];
	int tamanho;
	int i; //contador
	
	cin >> tamanho;
	
	for (i = 0; i < tamanho; i++)
	{
		cin >> vetor[i];
	}
	bubbleSort(vetor, tamanho);
	
	
	
	return 0;
}