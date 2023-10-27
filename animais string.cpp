#include <iostream>
#include <cstring>


using namespace std;

int main ()
{
	int i;
	int T;
	char opcao[50];

	for (i = 0; i < T; i++)
	{
		cin.getline(opcao, 50);
		cin.getline(opcao2, 50);

		if (strcmp(definicao, "vertebrado") == 0)
		{
			cin.getline (definicao1, 50);
			if (strcmp(definicao1, "ave") == 0)
			{
				cin.getline (definicao2, 50);
				if (strcmp(definicao2, "carnivoro") == 0)
					cout << "aguia" << endl;
				else
					cout << "pomba" << endl;
			}
			else
			{
				cin.getline (definicao2, 50);
				if (strcmp(definicao2, "conivoro") == 0)
					cout << "homem" << endl;
				else
					cout << "vaca" << endl;
			}

		}
		else
		{
			cin.getline (definicao1, 50);
			if (strcmp(definicao1, "inseto") == 0)
			{
				cin.getline (definicao2, 50);
				if (strcmp(definicao2, "hematofago") == 0)
					cout << "pulga" << endl;
				else
					cout << "lagarta" << endl;
			}
			else
			{
				cin.getline (definicao2, 50);
				if (strcmp(definicao2, "hematofago") == 0)
					cout << "sanguessuga" << endl;
				else
					cout << "minhoca" << endl;
			}

		}
	}
	return 0;
}





return 0;
}
