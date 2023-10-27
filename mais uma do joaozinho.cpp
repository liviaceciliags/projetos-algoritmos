#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main ()
{

	int i;
	int N;
	int N1, N2, N3, N4;
	double media;
	double soma;
	char nome [50];
	char aluno[50];

	cin >> N;
	cin.ignore();

	for (i = 0; i < N; i++)
	{
		cin.getline(aluno, 50);
		strcpy(nome, aluno);
		cin >> N1 >> N2 >> N3 >> N4;
		cin.ignore();
		soma = N1 + N2 * 2 + N3 * 3 + N4 * 4;
		media = soma / 10;
		cout << nome << ": " << fixed << setprecision(2) << media  << endl;

	}

	return 0;

}
