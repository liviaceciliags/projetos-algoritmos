#include <iostream>

using namespace std;

int ordena(int num[], int N, int x)
{

	int aux;
	int corredor = -1;
	int i;
	int j;

	for (i = 0; i < N; i++)
		for (j = 0; j < N - 1; j++)
			if (num[j] > num[j+1])
			{
				aux = num[j];
				num[j] = num[j + 1];
				num[j + 1] = aux;
			}

	for (i = 0; i < N; i++)
		if (x == num[i])
			corredor = i;

	if (corredor != -1 )
		return corredor;
	else
		return -1;

}
int main ()
{
	int N;
	int i;
	int x;
	int num[10000];
	int vetor;

	//1 - Ler N
	//cout << "Insira o numero de  valores:" << endl;
	cin >> N;

	//2 - Ler N elementos e armazenar no vetor
	//cout << "Insira os valores" << endl;
	for ( i = 0; i < N ; i++)
		cin >> num[i];

	//3 - buscando e elemento x a ser encontrado
	//cout << "Buscar: " << endl;
	cin >> x;

	vetor = ordena(num, N, x);

	if (vetor != -1)
		cout << "Corredor " << vetor << endl;

	else
		cout << "Nao localizado" << endl;


	return 0;
}
