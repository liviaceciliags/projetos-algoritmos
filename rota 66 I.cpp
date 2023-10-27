#include  <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double X;
	double Y;
	double result;

	cin >> X;
	cin >> Y;


	cout << fixed << setprecision(2);
	if (X == 0  || Y == 0)
		cout << "Voce esta com os numeros errados do desafio" << endl;
	else if (X < Y)
	{
		result = cbrt((X + 2 * Y) / (3 + X));
		cout << result << endl;
	}
	else if (X == Y)
	{
		result = pow(X, 3) - X * Y + sqrt(Y);
		cout << result << endl;
	}
	else 
	{
		result = (-X + sqrt(pow(X, 2) - 4 * Y) / 2 * Y);
		cout << result << endl;
	}
		
	return 0;
}
