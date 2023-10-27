#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int i;
	int N;
	char nome[50];
	int tamanho;
	int aux = 0;

	cin >> N;
	cin.ignore();
	for (i = 0; i < N; i++)
	{
		cin.getline(nome, 50);
		tamanho = strlen(nome);
		for (i = 0; i < tamanho; i++)
		{
			if (isupper(nome[i]))
				aux ++;
		}
		cout << aux;
	}


	return 0;
}
