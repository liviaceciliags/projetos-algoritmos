#include <iostream>

using namespace std;

int main()
{
	int idade;
	int soma;
	soma = 0;
	do
	{
		cin >> idade;
		if (idade < 7)
			soma = soma + 1;
	}
		while (!(idade >= 0));//enquando idade nao for positiva
		cout << soma << endl;
	
		return 0;
	}
