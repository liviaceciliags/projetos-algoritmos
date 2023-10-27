#include <iostream>
#include <cstring>


using namespace std;

int main()
{
	char palavra[100];
	int i;
	int tam;

	cin.getline(palavra, 100);
	tam = strlen(palavra);

	bool palindrono = true;
	for (i = 0; i < tam / 2; i++)
	{
		if ( palavra [i] != palavra[tam - i - 1])
			palindrono = false;
			
	}
	if (palindrono != false)
		cout << palavra << " eh palindrono" << endl;
	else 
		cout << palavra << " nao eh palindrono" << endl;
	return 0;
}

//cout << "Nao eh palindrono" << endl;
			//break;
/*como fazer um palindro:


reescrevendo a palavra de tras para a frente
se o resultado for igual a palavra de entrada, então é um palindro*/
