#include <iostream>
#include <list>

using namespace std;

int main()
{
	//o ultimo que chega é o primeiro que sai
	list<int>pilha;//pilha vai receber valores inteiros

	int x;
	int a, b, c, d;

	//inserindo dados na pilha
	cin >> a;
	pilha.push_front(a);//faz a inserção do numero 1 no inicio
	cin >> b;
	pilha.push_front(b);
	cin >> c;
	pilha.push_front(c);
	cin >> d;
	pilha.push_front(d);

	//removendo e mostrando elementos do pilha
	while (!pilha.empty())//enquento a pilha não estiver vazia, faça:
	{
		x = *pilha.begin();//*pilha.begin() = ponteiro que aponta para  o inicio da pilha
		cout << x << endl;
		pilha.pop_front();
	}
}
