#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char nome[50];
	char msc;
	int i = 0;
	int tamanho;
	int cont = 0;

	cin.getline(nome, 50);

	tamanho = strlen(nome);

	for (i = 0; i < tamanho; i++)
	{
		if (nome[i] == 'a'||nome[i] == 'e'||nome[i] == 'i'||nome[i] == 'o'||nome[i] == 'u')
		{
			msc = toupper(nome[i]);
			cout << msc;
			cont++;
		}
		else
			cout << nome[i];
	}

	cout << endl;
	cout << cont <<endl;
	return 0;
}
