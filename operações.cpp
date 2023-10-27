#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	double X, Y, r;
	char C;

	cin >> C;
	cin >> X >> Y;

	cout << fixed << setprecision(1);

	switch (C)
	{
	case '+':
		r = pow (Y, 2) + 2;
		cout << r << endl;
		break;
	case '-':
		r = X - Y;
		cout << r << endl;
		break;
	case '*':
		r = 2 * (X - Y);
		cout << r << endl;
		break;
	default:
		r = X / 5;
		cout << r << endl;
		break;

	}
	return 0;
}

