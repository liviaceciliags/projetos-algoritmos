#include <iostream>

using namespace std;

for (i = 0; i < num_testes; i++)
	{
		cout << "Numero de elementos: " << endl; 
		cin >> num_elementos;
		for (j = 0; j < num_elementos; j++)
		{
			cin >> matriz[j];
		}
		
		
		for (k = 0; k < num_elementos; k++)
		{
			matriz[k] 
			for (n = 0; n < k; n++)
			
		}
		if (esquerda == direita)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}













int main ()
{
	int num_testes;
	int num_elementos;
	int matriz[100];
	int i;
	int j;
	int meio;
	int esquerda = 0;
	int direita = 0; 
	cout << "Numero de testes: " << endl; 
	cin >> num_testes;

	for (i = 0; i < num_testes; i++)
	{
		cout << "Numero de elementos: " << endl; 
		cin >> num_elementos;
		for (j = 0; j < num_elementos; j++)
		{
			meio = num_elementos/2;
			cin >> matriz[j];
			if ( j < meio){
				
				esquerda = esquerda + matriz[j];
			}

			else
				direita = direita + matriz[j];
		}
		if (esquerda == direita)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}
