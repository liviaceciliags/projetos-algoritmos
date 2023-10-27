#include <iostream>

using namespace std;


int main()
{
	int i;
	int x;
	double fatorial = 1;
	int p, s, t;


	cin >> x;

	if (x % 2 == 0)
	{

		for (i = 1; i <= x; i++)
		{
			fatorial = fatorial * i;
		}

		cout << fatorial << endl;
	}
	else
		if (x == 1)
			cout << 0 << endl;
		else if ( x == 2)
			cout << 1 << endl;
		else
		{
			p = 0;
			s = 1;
			t = p + s;

			for ( i = 3; i < x; i ++)
			{
				p = s;
				s = t;
				t = p + s;
			}
			cout << t;
		}

			return 0;
		}
