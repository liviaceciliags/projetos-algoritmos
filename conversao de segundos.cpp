#include <iostream>

using namespace std;

int main()
{
	int idade;

	do
	{
		cin >> idade;

	}
	while (idade < 0 || idade > 100);
	cout << "Idade: " << idade << endl;

	return 0;
}
