#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
	char nome[50];
	int n1, n2, n3, n4;
};

int strongest(dados atletas[], int nAtletas)
{

	double media;
	int i, aux = 0;
	double maior = 0;
	for (i = 0; i < nAtletas; i++)
	{

		media = (atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4) / 4;
		if (media > maior)
		{
			maior = media;
			aux = i;
		}

	}


	return aux;
}


int main()
{
	int nAtletas;
	int i;
	dados atletas[1000];

	cin >> nAtletas;
	cin.ignore();
	for(i = 0; i < nAtletas; i++)
	{
		cin.getline(atletas[i].nome, 50);
		cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
		cin.ignore();
	}

	i = strongest(atletas, nAtletas) ;

	cout << "Vencedor: " << atletas[i].nome;

	return 0;
}
