#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int N;
	int vetor[50];
	int i;
	int x;
	int soma = 0;
	double media;
	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin >> x;
		vetor[i] = x;
	}
	for (i = 0; i < N;  i++)
	{
		soma += vetor[i];
	}
	media = (soma * 1.0) / N;
	cout << fixed << setprecision (2) << "Media: " << media << endl;
	cout << "Maiores que a media: ";
	for (i = 0; i < N;  i++)
	{
		if (vetor[i] > media)
			cout << vetor [i] << " ";
	}
	return 0;
}
