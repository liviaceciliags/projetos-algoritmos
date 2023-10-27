#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main ()
{
	int N;
	int i;
	int aux;
	double media;
	double soma = 0;
	double nota[5];
	double ponderada;
	char nome [50];
	char aluno[50];

	cin >> N;
	cin.ignore();

	for (i = 0; i < N; i++)
	{
		cin.getline(aluno, 50);
		strcpy(nome, aluno);
		for (aux = 0; aux < 4; i++)
		{
			cin >> nota[aux];
			cin.ignore();
			ponderada = nota[aux]*(aux+1);
			soma += ponderada;
		}
		media = soma / 4;
		cout << nome << ": " << fixed << setprecision(2) << media  << endl;

	}

	return 0;

}
