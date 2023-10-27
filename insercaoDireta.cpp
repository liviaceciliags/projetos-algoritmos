#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
	int i;
	int j;
	int chave;
	
	for (j = 1; j < tamanho ; j++)
	{
		chave = vetor[j];
		i = j -1;
		
		while ( i >= 0 && vetor[i] > chave)
		{
			vetor[i+1] = vetor[i];
			i = i -1;
		}
		vetor[i+1]= chave;
	}
}


int main ()
{
	   int tamanho;
	   int vetor[1000];
	   int i;
	   int j;
	   
	   
	   cin >> tamanho;
	   
	   for (i = 0; i <tamanho; i++)
	   {
	   	cin >> vetor[i];
	   }
	   
	   cout << endl;
	   
	   insercaoDireta(vetor, tamanho);
	   
	   for (j = 0; j < tamanho; j++)
	   	cout << vetor[j] << endl;
	   
	   
	   
	   	
	
	
	
	return 0;
}