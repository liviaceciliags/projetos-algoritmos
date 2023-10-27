#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0;
	int N;
	int positivo;
	int soma;
	double media;
	
	positivo = 0;
	soma = 0;
	
	for (i= 0; i < 10; i++)
	{
		cin >> N;
		soma = soma + N;
		if (N > 0)
			positivo = positivo + 1;
	}
	media = soma*1.0 / 10;

	cout << fixed << setprecision(2);
	cout << "Positivos = " << positivo << endl;
	cout << "Media = " << media << endl;

	return 0;
}
