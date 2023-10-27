#include <iostream>
#include <list>

using namespace std;


bool encontrar(list<int> lista, int x)
{
    list<int>::iterator p; //ponteiro p/ andar na lista
	bool verifica;
	verifica = false;
	for (p = lista.begin(); p != lista.end(); p++)
	{
		if ( *p == x)
			verifica = true;
	}
	
	if (verifica == true)
		return 0;
	else 
		return 1;
}


int main()
{
	//fila o primeiro que entra é o primeiro que sai
	list<int>fila; //ponteiro pra fila

	int i; //contador
	int x; //var aux leitura e escrita
	int busca;
	int res;
	//lendo elementos e inserindo-os na fila
	for (i = 0; i < 4; i++)
	{
		cin >> x;
		fila.push_back(x);//coloca no final da fila

	}

	cin >> busca;

	res = encontrar(fila, busca);
	
	if (res == 0)
		cout << "Encontrado" << endl;
	else 
		cout << "Nao encontrado" << endl;
	
	//liberando a memoria alocada pela lista ligada
	while (!fila.empty())
		fila.pop_front(); //remove o primeiro elemento da lista
	return 0;
}
