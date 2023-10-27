//1<=T<=100. 10^3<=Ano<=10^5

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

	int T;
	int i;
	int Ano;
	int result;

	cin >> T;


	if (1 <= T && T <= 100)
	{
		for (i = 0; T > i; i++)
		{
			cin >> Ano;
			if (pow (10,3) <= Ano && Ano <= pow (10,5))
			{
				result = Ano % 4;
				if (result == 0)
				{
					cout << "Yes" << endl;
				}
				else
					cout << "No" << endl;
			}
		}
	}
	return 0;
}





