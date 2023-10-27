#include <iostream>
#include <cstring>

using namespace std;


struct dados
{

	char nome [100];
	char curso [100];
	int matricula;
};

int pesquisa(char busca[], int N, dados aluno[], int aux)
{

	int j;
	int posicao;

	bool encontrado;


	for (j = 0; j < N; j++)
	{
		if (strcmp(busca, aluno[j].nome) == 0)
		{
			encontrado = true;
			posicao = j;
		}
	}
	if (encontrado == true)
		return posicao;
	else
		return -1;
}

int main()
{
	int i;
	int N;
	int valor;
	int aux = 0;
	char busca[100];
	dados aluno[10000];

	cin >> N;

	for (i = 0; i < N; i ++)
	{
		cin.ignore();
		cin.getline (aluno[i].nome, 100);
		cin.getline (aluno[i].curso, 100);
		cin >> aluno[i].matricula;
		aux ++;
	}

	cin.ignore();

	cin.getline(busca, 100);

	valor = pesquisa(busca, N, aluno, aux);

	if (valor == -1)
		cout << "Aluno nao encontrado" << endl;
	else
		for (i = 0; i < N; i++)
		{
			if (valor == i)
			{
				cout << aluno[i].nome << endl;
				cout << aluno[i].curso << endl;
				cout << aluno[i].matricula << endl;
				break;
			}
		}
	return 0;
}
