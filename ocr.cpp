#include <iostream>


using namespace std;


int main ()
{

	int mat[5][3];
	int i, j, aux = 0, u = 0, c0 = 0, l1 = 0, c1 = 0;
	int N = 5, M = 3;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> mat [i][j];
			if (mat [i][j] == 0)
				aux++;
		}
		if (aux == 15)
			break;
	}
	for (i = 0; i < N; i ++)
	{
		for (j = 0; j < M; j ++)
			if (mat [i][j] == 1)
				u++;
	}
	switch (u) {
		case 10:
		cout << "UM" << endl;
		break;
		case 6:
		cout << "QUATRO" << endl;
		break;
		case 8:
		cout << "SETE" << endl;
		break;
		case 2:
		cout << "OITO" << endl;
		break;
		case 5:
		cout << "NOVE" << endl;
		break;
	}
	
	j = 1;
	for (i = 0; i < N; i ++)
	{
		if (mat [i][j] == 1)
			c1++;
	}
	j = 0;
	for (i = 0; i < N; i ++)
	{
		if (mat [i][j] == 1)
			c0++;
	}
	i = 1;
	j = 0;
	if (mat [i][j] == 1)
		l1++;

	if (c1 == 3)
		cout << "ZERO" << endl;
	else if (l1 == 1)
		cout << "DOIS" << endl;
	else if (c0 == 2)
		cout << "TRÊS" << endl;
	else if (c1 == 2)
		cout << "SEIS" << endl;
	else
		cout << "CINCO" << endl;



	return 0;
}

