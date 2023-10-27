#include <iostream>
#include <list>

using namespace std;




int main()
{
	//fila o primeiro que entra é o primeiro que sai
	list<int>estoque; //ponteiro pra estoque
	list<int>venda; //ponteiro pra venda
	list<int>::iterator p; //ponteiro p/ andar na lista
	list<int>::iterator q; //ponteiro p/ andar na lista

	int x; //var aux leitura e escrita
	int i; //contador
	int N;
	int opcao;

	cin >> N;

	//lendo elementos e inserindo-os na fila
	for ( i = 0; i < N; i++)
	{
		cin >> opcao;
		switch (opcao)
		{
		case 1:
			cin >> x;
			estoque.push_back(x);//coloca no final da fila
			break;
		case 2:
			p = estoque.begin();
			venda.push_front(*p);
			estoque.pop_front();
			break;
		}
	}

	cout << "Estoque: ";
	for (p = estoque.begin(); p != estoque.end(); p++)
	{
		cout << *p << " ";
	}
	cout << endl;
	cout << "Venda: ";
	for (q = venda.begin(); q != venda.end(); q++)
	{
		cout << *q << " ";
	} 
	cout << endl;
	//liberando a memoria alocada pela lista ligada
	while (!estoque.empty())
		estoque.pop_front(); //remove o primeiro elemento da lista

	while (!venda.empty())
		venda.pop_front(); //remove o primeiro elemento da lista
	return 0;
}
