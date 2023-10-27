#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	int C, Q;
	double preco;

	cin >> C >> Q;
	cout << fixed << setprecision(2);

	if (C <= 5)
	{
		if ( C == 1)
		{
			preco = Q * 4.00;
			cout << "Total: R$ " << preco << endl;
		}
		else if(C == 2)
		{
			preco = Q * 4.50;
			cout << "Total: R$ " << preco << endl;
		}
		else if (C == 3)
		{
			preco = Q * 5.00;
			cout << "Total: R$ " << preco << endl;
		}
		else if (C == 4)
		{
			preco = Q * 2.00;
			cout << "Total: R$ " << preco << endl;
		}
		else
		{
			preco = Q * 1.50;
			cout << "Total: R$ " << preco << endl;
		}
	}
	return 0;

}
