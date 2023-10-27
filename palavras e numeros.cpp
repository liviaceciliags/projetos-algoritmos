#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char palavra1[50];
	char palavra2[50];
	int i, tamanho;

	cin >> palavra1 >> palavra2;

	if (strcmp(palavra1, palavra2) == 0)
	{
		tamanho = strlen(palavra1);
		for (i = 0; i < tamanho; i++)
		{
			if (palavra1[i] != '0' & palavra1[i] != '1' & palavra1[i] != '2' & palavra1[i] != '3' & palavra1[i] != '4' & palavra1[i] != '5' & palavra1[i] != '6' & palavra1[i] != '7' & palavra1[i] != '8' & palavra1[i] != '9' )
				cout << palavra1[i];
		}


	}
	else
		cout << "Nao sao iguais!" << endl;


	return 0;
}
