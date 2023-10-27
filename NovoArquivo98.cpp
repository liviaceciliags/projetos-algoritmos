#include <iostream>
#include <cmath>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x)
{

	list<int>::iterator p;

	for(p = lista.begin(); p != lista.end(); p++)
		if(*p == x)
			return true;

	return false;

}

/*void quickSort(int vetor[], int tamanho, int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}*/

int main()
{
	//fila o primeiro que entra é o primeiro que sai
	list<int>primeira; //ponteiro pra primeira
	list<int>segunda; //ponteiro pra segunda
	list<int>terceira; //ponteiro pra terceira
	list<int>::iterator p; //ponteiro p/ andar na lista
	list<int>::iterator q; //ponteiro p/ andar na lista


	int x; //var aux leitura e escrita
	int N;
	int tamanho;
	//int vetor [100000];
	int i;
	int j;
	int trab;
	bool troca = true;
	int limite;

	cin >> N;


	//lendo os elementos da primeira lista
	do
	{
		cin >> x;
		if (x != 0)
		{
			primeira.push_back(x);
		}
	}
	while (x != 0);

	//lendo os elementos da segunda lista
	do
	{
		cin >> x;
		if (x != 0)
		{
			segunda.push_back(x);
		}
	}
	while (x != 0);

	//unindo as duas listas
	for(p = primeira.begin(); p != primeira.end(); p++)
		segunda.push_back(*p);

	for(p = segunda.begin(); p != segunda.end(); p++)
		if(!encontrar(terceira, *p))
			terceira.push_back(*p);

	//usando bubble sort para reordenar a lista
	tamanho = terceira.size();
	limite = tamanho - 1;

	while(troca)
	{

		troca = false;
		p = terceira.begin();
		q = terceira.begin();
		q++;
		for(i = 0; i < limite; i++)
		{

			if(*p > *q)
			{

				trab = *p;
				*p = *q;
				*q = trab;
				j = i;
				troca = true;

			}

			p++;
			q++;

		}




	}
	for (p = terceira.begin(); p != terceira.end(); p++)
	{
		cout << *p << " ";
	}
	while (!primeira.empty())
		primeira.pop_front(); //remove o primeiro elemento da lista
	while (!segunda.empty())
		segunda.pop_front(); //remove o primeiro elemento da lista
	while (!terceira.empty())
		terceira.pop_front(); //remove o primeiro elemento da lista
	return 0;
}
