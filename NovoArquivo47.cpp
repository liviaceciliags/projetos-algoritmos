#include <iostream>


using namespace std;

int main()
{

	int i, j; // contadores
	int nLinhas = 2;
	int nColunas = 3;

	for(i = 0; i < nLinhas; i++)
	{
		for(j = 0; j < nColunas; j++)
			cout << mat[i][j] << “ “;
		cout << endl;
	}

	return 0;
}
