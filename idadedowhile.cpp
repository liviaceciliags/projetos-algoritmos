#include <iostream>

using namespace std;

int main()
{
	int idade;

	do
	{
		cin >> idade;

	}
	while (!(idade >= 0));//enquando idade nao for positiva
	cout << "Idade: " << idade << endl;

	return 0;
}
