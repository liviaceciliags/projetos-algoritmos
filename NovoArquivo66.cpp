#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list<int>pilha;//pilha vai receber valores inteiros
	
	int x;
	
	//inserindo dados na pilha
	pilha.push_front(1);//faz a inserção do numero 1 no inicio
	pilha.push_front(2);
	pilha.push_front(3);
	pilha.push_front(4);
	
	//removendo e mostrando elementos do pilha
	x = *pilha.begin();//*pilha.begin() = ponteiro que aponta para  o inicio da pilha 
	cout << x << endl;
	pilha.pop_front();
	
	x = *pilha.begin();//*pilha.begin() = ponteiro que aponta para  o inicio da pilha 
	cout << x << endl;
	pilha.pop_front();
	
	x = *pilha.begin();//*pilha.begin() = ponteiro que aponta para  o inicio da pilha 
	cout << x << endl;
	pilha.pop_front();
	
	x = *pilha.begin();//*pilha.begin() = ponteiro que aponta para  o inicio da pilha 
	cout << x << endl;
	pilha.pop_front();
	
}