#include <iostream>
#include <iomanip>

using namespace std;


float ideal(float h, char sexo)
{
	double peso;
	if ( sexo == 'F')
	{
		peso  = 62.1 * h - 44.7;
		return peso;
	}
	else
	{
		peso  = 72.7 * h - 58;
		return peso;
	}
}


int main ()
{
	double h, result;
	char sexo;

	cin >> h >> sexo;

	result = ideal(h, sexo);

	cout << fixed << setprecision (2) << "Peso ideal = " << result << " kg" << endl;

	return 0;
}
