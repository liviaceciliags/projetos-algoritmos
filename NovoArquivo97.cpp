#include <iostream>
#include <cmath>
#include <list>

using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)
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
}

int main()
{
	//fila o primeiro que entra é o primeiro que sai
	list<int>primeira; //ponteiro pra primeira
	list<int>segunda; //ponteiro pra segunda
	list<int>terceira; //ponteiro pra terceira
	list<int>::iterator p; //ponteiro p/ andar na lista

	int x; //var aux leitura e escrita
	int N;
	int tamanho = 0;
	int vetor [100000];
	int i;

	cin >> N;

	//lendo elementos e inserindo-os na fila

	do
	{
		cin >> x;
		if (x != 0)
		{
			primeira.push_back(x);//coloca no final da fila
			vetor[tamanho] = x;
			tamanho++;
		}
	}while (x != 0);
	
	do
	{
		cin >> x;
		if (x != 0)
		{
			segunda.push_back(x);//coloca no final da fila
			vetor[tamanho] = x;
			tamanho++;
		}
	}
	while (x != 0);
	
	quickSort(vetor, tamanho, 0, tamanho - 1);
	
	bool flag;
	for (i =0; i < tamanho; i++)
	{
		flag = false;
		for(int j = 0; j < i; j++){
			if (vetor[i] == vetor[j])
			{
				flag = true;
				break; 
			}
		}
		if (flag == false){
			cout << vetor[i] << endl;
			
		}
	}

	
	
	//for (i = 0; i < tamanho; i++)
	//	cout << vetor[i] << " ";

	/*
	for(p = terceira.begin(); p != terceira.end(); p++)
	{
		cout << *p << " ";
	}*/
	while (!primeira.empty())
		primeira.pop_front(); //remove o primeiro elemento da lista
	while (!segunda.empty())
		segunda.pop_front(); //remove o primeiro elemento da lista
	while (!terceira.empty())
		terceira.pop_front(); //remove o primeiro elemento da lista
	return 0;
}
