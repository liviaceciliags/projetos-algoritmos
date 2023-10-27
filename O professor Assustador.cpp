#include <iostream>
#include <iomanip>
using namespace std;



float media(int notas[], int nAlunos)
{
	int soma = 0;
	int i;

	for ( i = 0; i < nAlunos; i++)
		soma += notas[i];
	return (soma * 1.0 / nAlunos);
}



int main()
{
	int i;
	int nAlunos;
	int notas [100];
	double m;
	cin >> nAlunos;

	for (i = 0; i < nAlunos; i++)
		cin >> notas [i];

	m = media(notas, nAlunos);

	cout << fixed << setprecision (2) << "Media da turma = " << m << endl;
	return 0;
}

