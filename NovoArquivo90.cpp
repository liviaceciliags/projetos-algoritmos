#include <iostream>
#include <list>

using namespace std;

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
	//removendo elementos e mostrando na tela
 	while(!fila.empty())//enquanto a fila não estiver vazia
		
	{
		x = *fila.begin();//encontra o primeiro elemento da fila
		cout << x << " "; // x rec
		fila.pop_front(); //remove o primeiro elemento da lista
	}
	return 0;
}
