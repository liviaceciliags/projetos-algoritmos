#include <iostream>
#include <cstring>//incluindo biblioteca

using namespace std;

int main()
{
	char nome[50];
	int idade; 
	
	cin >> idade;//numero int ou float //cin depois cin.getline
	cin.ignore();//limpa a entrada e consome o enter
	cin.getline(nome, 50);

	cout << "Idade: "<<idade << endl;
	cout << "Nome: " << nome << endl;
	return 0;
}
