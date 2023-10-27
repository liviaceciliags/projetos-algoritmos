#include <iostream>
#include <cstring>
using namespace std;



struct dados
{
	char nome[50];
	int base;
};

int main ()
{
	int N;
	int i;
	char busca [50];

	dados jedi [1000];

	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline (jedi[i].nome, 50);
		cin >> jedi[i].base;

	}
	cin.ignore();
	cin.getline(busca, 50);
	for (i = 0; i < N; i++)
	{
		if (strcmp(busca, jedi[i].nome) == 0)
		{
			cout << "Este cavaleiro esta na base " << jedi[i].base << endl;
			break;
		}

		else if (strcmp(busca, jedi[i].nome) != 0)
		{
			cout << "Este cavaleiro nao esta cadastrado" << endl;
			break;
		}
	}

	return 0;
}
