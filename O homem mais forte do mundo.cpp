#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
	char nome[50];
	int N1, N2, N3, N4;
};

int main()
{
	int N;
	int i;
	double media;
	double maior = 0;
	char forte[50];
	dados homem[1000];

	cin >> N;
	cin.ignore();
	for(i = 0; i < N; i++)
	{
		cin.getline(homem[i].nome, 50);
		cin >> homem[i].N1 >> homem[i].N2 >> homem[i].N3 >> homem[i].N4;
		cin.ignore();
		media = (homem[i].N1 + homem[i].N2 + homem[i].N3 + homem[i].N4) / 4;
		if (media > maior)
		{
			maior = media;
			strcpy(forte, homem[i].nome);
		}
	}
	cout << "Vencedor: " << forte;

	return 0;
}
