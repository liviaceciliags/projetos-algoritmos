#include <iostream>
#include <list>

using namespace std;

int main()
{
	//o primeiro que chega � o primeiro que sai
	list<int>fila;//fila vai receber valores inteiros

	int x;
	int i;

	//inserindo dados na fila
	for (i = 0; i < 4; i++){
    	cin >> x;
    	fila.push_back(x);//faz a inser��o do numero 1 no inicio
	}

	//removendo e mostrando elementos da fila
	while (!fila.empty())//enquanto a fila n�o estiver vazia, fa�a:
	{
		x = *fila.begin();//*fila.begin() = ponteiro que aponta para  o inicio da pilha
		cout << x << endl;
		fila.pop_front();
	}
}
