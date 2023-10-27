#include <iostream>

using namespace std;

int main ()
{
	int N;//n# de elementos do vetor
	int X;//elem  a ser encontrado
	int vetor[100000];//vetor que armazena dados
	int i;//contador geral
	int aux; //variavel auxiliar que recebe i

	bool encontrado = false;

	//lendo o tam do vetor
	cout << "tam:" << endl;
	cin >> N;

	//lendo os elem de cada posição do vetor
	for (i = 0; i < N ; i++)
	{
		cout << "Valor:" << endl;
		cin >> vetor[i];
	}

	//buscando e elemento x a ser encontrado
	cout << "Buscar: " << endl;
	cin >> X;

	//verificando a existencia do elemento e
	for (i = 0; i < N ; i++)
		if (X == vetor[i])
		{
			encontrado = true;
			aux = i;
		}

	//declarando a posição
	if (!encontrado)
		cout << "Não encontrado" << endl;
	else
		cout << X << "Encontrado na posicao" << aux << endl;

	return 0;
}
