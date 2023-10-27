#include <iostream>
#include <list>

using namespace std;


int soma(list<int> lista)
{
    list<int>::iterator p; //ponteiro p/ andar na lista
	int soma = 0;
	for (p = lista.begin(); p != lista.end(); p++)
	{
		soma += *p;
	}
	return soma;
}


int main()
{
	//fila o primeiro que entra é o primeiro que sai
	list<int>fila; //ponteiro pra fila

	int i; //contador
	int x; //var aux leitura e escrita

	//lendo elementos e inserindo-os na fila
	for (i = 0; i < 4; i++)
	{
		cin >> x;
		fila.push_back(x);//coloca no final da fila

	}

	cout << soma(fila) << endl;
	
	//liberando a memoria alocada pela lista ligada
	while (!fila.empty())
		fila.pop_front(); //remove o primeiro elemento da lista
	return 0;
}
