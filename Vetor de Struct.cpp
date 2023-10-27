#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct dados
{
	char nome[50];
	int matricula;
	int nota;

};

int main()
{
	int i;
	int N;
	int J;
	double soma = 0;
	double menor = 100;
	double media;
	char minima[50];

	dados registro[1000];
	cout << "digite N: ";
	cin >> N;
	cout << "digite J: ";
	cin >> J;
	cin.ignore();
	for (i = 0; i < N; i++)
	{
		
		cout << "digite nome: ";
		cin.getline(registro[i].nome, 50);
		cout << "digite matricula: ";
		cin >> registro[i].matricula;
		cout << "digite nota: ";
		cin >> registro[i].nota;
		cin.ignore();
		soma += registro[i].nota;
		if (registro[i].nota < menor)
		{
			menor = registro[i].nota;
			strcpy(minima, registro[i].nome);
		}
		
	}

	media = soma / N;
	cout << "Media: " << fixed << setprecision(2) << media << endl;
	cout << minima << endl;
	for (i = 0; i < N; i++)
	{
		if (J == i)
		{
			cout << registro[i].nome << " " << registro[i].matricula << " " << fixed << setprecision(2) << registro[i].nota << endl;
		}

	}
	

	return 0;
}

