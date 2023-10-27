#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int vetor[100];
	int i;
	int X = 1;
	int aux;
	int vezes = 0;
	int N;
	double porcentual;

	cin >> N;
	for (i = 0; i < N; i++ )
	{
		cin >> X;
		vetor[i] = X;
	}

	cin >> aux;

	for (i = 0; i < N; i++ )
	{
		X = vetor[i];
		if (X == aux)
			vezes ++;
	}
	porcentual = 100 / (N*1.0 / vezes);
	cout << fixed << setprecision(2) << porcentual << endl;

	return 0;
}

