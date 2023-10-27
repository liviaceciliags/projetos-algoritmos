#include <iostream>
#include <cstring>

using namespace std;
int main ()
{
	int i;
	int N;
	int idade;
	char name[50];
	char nome[50];

	cin >> N;
	cin.ignore();
	for (i = 0; i < N; i++)
	{

		cin.getline(name, 50);
		cin >> idade;
		cin.ignore();
		if (idade >= 18)
		{
			strcpy(nome, name);
			cout << nome << " " << idade << endl;
		}

	}
	return 0;
}

