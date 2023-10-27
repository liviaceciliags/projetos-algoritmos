#include <iostream>

using namespace std;

struct dados
{
	char nome[50];
	char data [10];
	char sexo [2];
};


int main()
{
	
	dados simples;
	
	cin.getline(simples.nome,50);
	cin.getline(simples.data,10);
	cin.getline(simples.sexo,2);
	
	cout << simples.nome << endl << simples.data << endl << simples.sexo;
	return 0;
}