#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int N;
	int v[100];
	int K;
	int i;
	int aux;
	int x;

	cin >> N;
	for ( K = N - 1; K > 0; K--)
	{
		for ( i = 0; i < K; i++)
		{
			cin >> x;
			v[i] = x;
			if (v[i] > v[i + 1])
			{
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				
			}
		}
		for (i = 0; i < N; i++)
					cout << v[i +1] << " ";
	}

	return 0;

}

