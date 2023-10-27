#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int i;
	int N;
	int X;

	cin >> N;

	if (N < 10000)
	{
		{

			for( i = 0; i < N; i++)
			{

				cin >> X;
				if (pow(-10, 7) < X && pow(10, 7))
				{
					if ( X > 0)
					{
						if (X % 2 == 0)
							cout << "EVEN POSITIVE" << endl;
						else
							cout << "ODD POSITIVE" << endl;
					}
					else if (X < 0 )
					{
						if (X % 2 == 0 )
							cout << "EVEN NEGATIVE" << endl;
						else
							cout << "ODD NEGATIVE" << endl;
					}
					else
						cout << "NULL" << endl;
				}

			}
		}
	}

	return 0;
}

