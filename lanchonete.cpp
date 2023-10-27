#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int c, q;
	double r;

	cin >> c >> q;

	switch (c)
	{
	case 1:
		r = q * 3.00;
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << r << endl;
		break;
	case 2:
		r = q * 5.50;
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << r << endl;
		break;
	case 3:
		r = q * 6.00;
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << r << endl;
		break;
	case 4:
		r = q * 3.00;
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << r << endl;
		break;
	default:
		r = q * 2.50;
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << r << endl;
		break;
	}
	return 0;
}
