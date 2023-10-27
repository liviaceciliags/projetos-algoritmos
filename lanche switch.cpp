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

	switch(C <= 5)
	{
	case 1:
		preco = Q * 4.00;
		cout << "Total: R$ " << preco << endl;
		break;
	case 2:
		preco = Q * 4.50;
		cout << "Total: R$ " << preco << endl;
		break;
	case 3:
		preco = Q * 5.00;
		cout << "Total: R$ " << preco << endl;
		break;
	case 4:
		preco = Q * 2.00;
		cout << "Total: R$ " << preco << endl;
		break;
	default:
		preco = Q * 1.50;
		cout << "Total: R$ " << preco << endl;
	}

return 0;

}
