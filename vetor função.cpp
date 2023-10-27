#include <iostream>

using namespace std;

float mediana (int vetor[], int N)
{

	if (N % 2 == 1)
		return vetor[N / 2];
	else
		return (float)(vetor[N / 2] + vetor[N / 2 - 1]) / 2;
}


int main ()
{
	int notas[10], N, i;
	float m;

	cin >> N;

	for (i = 0; i < N; i++)
		cin >> notas[i];

	m = mediana(notas, N);

	cout << "mediana = " << m << endl;

	return 0;
}
