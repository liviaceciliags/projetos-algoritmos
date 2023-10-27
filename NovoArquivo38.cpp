#include <iostream>
#include <cmath>
using namespace std;

long long int elevado ( int x, int y)
{
	return (pow(x, y));
}

int main()
{
	int x;
	int y;
	long long int result;

	cin >> x >> y;

	result = elevado(x, y);

	cout << result << endl;
	return 0;
}
