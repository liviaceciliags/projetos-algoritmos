#include <iostream>


using namespace std;

int main()
{
	int i, j, mat[3][3];
	int N = 3, M = 3, aux = 0;


	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> mat [i][j];

		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if(mat [i][j] == 1)
				aux ++;
		}
	}
	if (aux == 5)
		cout << "MASCULINO" << endl;
	else 
		cout << "FEMININO" << endl;
		return 0;
	}
