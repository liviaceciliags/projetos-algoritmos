#include <iostream>
#include <list>

using namespace std;

int main()
{
	//fila o primeiro que entra é o primeiro que sai
	list<int>fila; //ponteiro pra fila
	list<int>::iterator p; //ponteiro p/ andar na lista
	int i; //contador
	int x; //var aux leitura e escrita
	int soma = 0;//soma dos elementos da lista
	//lendo elementos e inserindo-os na fila
	for (i = 0; i < 4; i++)
	{
		cin >> x;
		fila.push_back(x);//coloca no final da fila

	}

	cout << "Elementos inseridos: " << endl;
	for (p = fila.begin(); p != fila.end(); p++)//fila.end aponta para o nó que tem depois do último elemento!
		//cout << *p << endl;
		soma += *p; 
		
	cout << "Soma = " << soma << endl;
	//liberando a memoria alocada pela lista ligada
	while (!fila.empty())
		fila.pop_front(); //remove o primeiro elemento da lista
	//removendo elementos e mostrando na tela
	/*while(!fila.empty())//enquanto a fila não estiver vazia

	{
		x = *fila.begin();//encontra o primeiro elemento da fila
		cout << x << " "; // x rec
		fila.pop_front(); //remove o primeiro elemento da lista
	}*/
	return 0;
}
