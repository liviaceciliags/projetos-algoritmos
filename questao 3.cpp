#include <iostream>

using namespace std;

int main ()
{
	int n; //quantidade de valores que serao lidos
	int nImpares = 0;
	int nPares = 0;
	int nPositivos = 0;
	int nNegativos = 0;
	int i;
	int aux;
	
	cin>> n;
	
	for ( i = 0; i< n; i++)
	{
		cin >> aux;
		if (aux % 2 ==0)
			nPares++;
		else 
			nImpares++;
		if ( aux >= 0)
			nPositivos ++;
		else 
			nNegativos ++;
			
	}
	cout << nPares << "Numeros pares" << endl;
	cout << nImpares << "Numeros impares" << endl;
	cout << nPositivos << "Numeros positivos" << endl;
	cout << nNegativos << "Numeros negativos" << endl;
	
	return 0;
}