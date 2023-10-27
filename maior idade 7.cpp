#include <iostream>
using namespace std;

int main ()
{
	int idade = -1;//numero que esta sendo lido
	int maior = -1;
	int N; //numeros de idades lidas
	int i;

	cin >> N;//numeros de pessoas cujas idades serão lidas

	for (i = 0; i < N; i++)
	{
		while (idade < 0)
		{
			cin >> idade;
			
		}
		if (idade > maior)
			maior = idade;
			idade = -1;
		
	}
	cout << maior << endl;
	
	return 0;
}