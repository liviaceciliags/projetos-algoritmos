#include <iostream>
#include <list>

using namespace std;

int main()
{
	//o primeiro que chega é o primeiro que sai
	list<int>fila;//fila vai receber valores inteiros

	int x;

	int a, b, c, d;

	//inserindo dados na pilha
	cin >> a;
	fila.push_back(a);//faz a inserção do numero 1 no inicio
	cin >> b;
	fila.push_back(b);
	cin >> c;
	fila.push_back(c);
	cin >> d;
	fila.push_back(d);

	//removendo e mostrando elementos da fila
	while (!fila.empty())//enquanto a fila não estiver vazia, faça:
	{
		x = *fila.begin();//*fila.begin() = ponteiro que aponta para  o inicio da pilha
		cout << x << endl;
		fila.pop_front();
	}
}
