#include <iostream>


using namespace std;

int main()
{

	int n;
	int i;
	int d;
	int x;

	d = 0;
	n = 5;

	for( i = 0; i < n; i++)
	{
		cin >> x;
		if (x%2 == 0)
			d = d + 1;
	}

	cout << d << " valores pares" << endl;
	

	return 0;
}

