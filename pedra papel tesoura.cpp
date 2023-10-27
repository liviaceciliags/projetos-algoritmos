#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char definicao1 [50];
	char definicao2 [50];
	int i; //contador
	int N; //numero de rodadas

	cin >> N;
	cin.ignore();
	for (i = 0; i < N; i++)
	{
		cin.getline(definicao1, 50);
		cin.getline(definicao2, 50);
		if (strcmp(definicao1, "papel") == 0)
		{
			if (strcmp(definicao2, "tesoura") == 0)
				cout << "Jogador B" << endl;
			else if (strcmp(definicao2, "pedra") == 0)
				cout << "Jogador A" << endl;
			else
				cout << "Empate" << endl;
		}
		else if (strcmp(definicao1, "pedra") == 0)
		{
			if (strcmp(definicao2, "tesoura") == 0)
				cout << "Jogador A" << endl;
			else if (strcmp(definicao2, "pedra") == 0)
				cout << "Empate" << endl;
			else
				cout << "Jogador B" << endl;
		}
		else
		{
			if (strcmp(definicao2, "tesoura") == 0)
				cout << "Empate" << endl;
			else if (strcmp(definicao2, "pedra") == 0)
				cout << "Jogador B" << endl;
			else
				cout << "Jogador A" << endl;
		}
	}


	return 0;
}
