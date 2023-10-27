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

int nAbaixo(int notas[], int nAlunos, float m){
	
	int aux = 0, i; 
	for (i = 0; i < nAlunos; i++)
	{
		if (notas[i] < m)
		{
			aux ++;
		}
	}
	return aux; 	
}


int nAcima(int notas[], int nAlunos, float m){
	int aux = 0, i; 
	for (i = 0; i < nAlunos; i++)
	{
		if (notas[i]> m)
		{
			aux ++;
		}
	}
	return aux;
}


int main()
{
	int i;
	int nAlunos;
	int notas [100];
	int acima, abaixo;
	float m;
	cin >> nAlunos;

	for (i = 0; i < nAlunos; i++)
		cin >> notas [i];

	m = media(notas, nAlunos);
	
	acima = nAcima(notas, nAlunos, m);
	abaixo = nAbaixo(notas, nAlunos, m);
	cout << fixed << setprecision (2) << "Media da turma = " << m << endl;
	cout <<"Alunos com nota abaixo da media: " << abaixo << endl;
	cout <<"Alunos com nota acima da media: " << acima << endl;
	return 0;
}

