#include <iostream>

using namespace std;

int main ()
{
	int i;
	int n;
	int soma = 0;
	int num;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num;
		soma = soma + num;
		
	}
	cout << soma << endl;
	return 0;
}
