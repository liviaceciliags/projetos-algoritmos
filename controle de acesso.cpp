#include <iostream>

using namespace std;


// Retorna a posição emque X foi encontrado no vetor
// Retorna -1 se X não for encontrado
int binaria(int vetor[], int tamanho, int x)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)//se achou for verdadeiro o comando vai rodar
		return meio;
	else
		return -1;
}

int main ()
{
	int N;
	int x;
	int num[10000];
	int pos; //posição
	int aux = 0;
	int valor;


	//1 - Ler N elementos e armazenar no vetor
	do
	{
		cout << "Insira os valores" << endl;
		cin >> valor;
		if (valor != -1 && aux < 20)
			num[aux] = valor;
		aux ++;
	}
	while(valor != -1);

	N = aux;


	//2 - buscando e elemento x a ser encontrado
	cout << "Buscar: " << endl;
	cin >> x;

	// 4 - procurando X no vetor
	pos = binaria(num, N, x);

	if (pos == -1)
		cout << "Nao possui acesso" << endl;
	else
		cout << "possui acesso" << endl;

	return 0;
}
