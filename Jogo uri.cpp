#include <iostream>

using namespace std;

int main()
{
	int p, j1, m2, r, a;

	cin >> p >> j1  >> m2 >> r >> a;

	if((j1 + m2) % 2 == 0)
		if(r == 0)
		{
			if(a == 0)
				cout << "Maria ganha!" << endl;
			else
				cout << "Joao ganha!" << endl;
		}
	if(r == 1)
	{
		if(a == 0)
			cout << "Joao ganha!" << endl;
		else
			cout << "Maria ganha!" << endl;
	}

	if((j1 + m2) % 2 != 0)
		if(r == 0)
		{
			if(a == 0)
				cout << "Maria ganha!" << endl;
			else
				cout << "Joao ganha!" << endl;
		}
	if(r == 1)
	{
		if(a == 0)
			cout << "Joao ganha!" << endl;
		else
			cout << "Maria ganha!" << endl;
	}
	return 0;
}
