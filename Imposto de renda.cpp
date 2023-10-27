#include <iostream>
#include <iomanip>

using namespace std;


int main ()
{

	double s, r, m, n, q, t, x, z;

	cin >> s;

	cout << fixed << setprecision(2);

	if (s < 2000)
		cout << "Isento" << endl;
	else
	{
		r = s - 2000;
		if (r <= 1000)
		{
			m = r * 0.08;
			cout << "R$ " << m << endl;
		}
		else
		{
			m = 1000 * 0.08;
			n = r - 1000;
			if (n <= 1500)
			{
				q = n * 0.18;
				t = q + m;
				cout << "R$ " << t << endl;
			}
			else
			{
				m = 1000 * 0.08;
				q = 1500 * 0.18;
				x = (n - 1500) * 0.28;
				z = m + q + x;
				cout << "R$ " << z << endl;

			}

		}

	}

	return 0;
}
