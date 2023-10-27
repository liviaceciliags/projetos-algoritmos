#include <iostream>

using namespace std;

int main()
{

	int idade;// declarando a variavel idade
	int ano;
	int mes;
	int dia;
	int x;

	cin >> idade;

	ano = idade / 365;
	x = idade % 365;
	mes = x / 30;
	dia = x % 30;

	cout << ano << " ano(s)" << endl << mes << " mes(es)" << endl << dia << " dia(s)" << endl;



	return 0;
}
