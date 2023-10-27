#include <iostream>

using namespace std;

void fatorial(int x, long int &f)
{
	int i;
	for (i = 1; i <= x; i++)
	{
		f = f * i;
	}
}
int main()
{
	int x;
	long int f = 1;

	cin >> x;

	fatorial(x, f);
	cout << f << endl;

	return 0;
}





