#include <iostream>

using namespace std;

int main ()
{
	double x, y, r;
	char s;
	cin >> x >> y;
	cin >> s;

	switch (s)
	{
	case '+':
		r = x + y;
		cout << r << endl;
		break;
	case '-':
		r = x - y;
		cout << r << endl;
		break;
	case '*':
		r = x * y;
		cout << r << endl;
		break;
	case '/':
		if (y > 0 || y < 0)
		{
			r = x / y;
			cout << r << endl;
		}
		else
			cout << "Impossivel" << endl;
		break;

	}
	return 0;
}
