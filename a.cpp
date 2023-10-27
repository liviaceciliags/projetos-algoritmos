#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


struct dados
{
	char nome[50];
	int pontos;
};

int main()
{

	int N; //# de padawans
	int i;
	double soma = 0;
	double media;
	int aux, num;
	int maior = 0;
	char name[50];
	dados padawan[1000];

	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline(padawan[i].nome, 50);
		cin >> padawan[i].pontos;
		soma += padawan[i].pontos;
		aux = padawan[i].pontos;
		if ( aux > maior)
		{
			strcpy(name, padawan[i].nome);
			num = aux;
			maior = aux;
		}

	}
	media = soma / N;

	cout << "Padawan com mais pontos:" << name << endl;
	cout << "Pontos: " << num << endl;
	cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos " << endl;
	return 0;
}
