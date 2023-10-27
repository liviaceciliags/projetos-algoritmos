#include <iostream>
#include <cstring>


using namespace std;

int calcula_chave(char nome[])
{
	int tam; //comprimento de nome 
	int i; //contador
	int k = 0;
	tam = strlen(nome);
	for(i = 0; i <tam; i++)
		k +=(int)nome(i);
	return k;
	
}

int main()
{
	char nome[50];
	int k;
	cin.getline(nome,50);
	
	k = calcula_chave(nome);
	
	cout << "k = " << k << endl;
	
	return 0;
}