#include <iostream>

using namespace std;

int tabuada (int N, int aux)
{
	return (N * aux);
}

int main()
{
	int N;
	int aux = 1;
	int result;

	cin >> N;

	for (aux = 1; aux <= 10; aux++)
	{
		result = tabuada(N, aux);
		cout << N << " x " << aux << " = " << result << endl;
	}
	return 0;
}
