#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c)
{

	return ((pow(b, 2) - 4 * a * c));


}
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	double delta;
	delta = calc_delta(a, b, c);
	if (delta < 0)
		return 1;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);

	return 0;
}
int main ()
{
	float a, b, c;
	float x1, x2;
	float result;


	cin >> a >> b >> c;

	result = calc_raizes(a, b, c, x1, x2);
	if (result != 0)
		cout << "Nao ha raizes reais" << endl;
	else
	{

		if (x1 == x2)
			cout << "x = " << x1 << endl;
		else if (x1 < x2)
		{
			cout << fixed << setprecision (2) << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		else if (x1 > x2)
		{
			cout << fixed << setprecision (2) << endl;
			cout << "x1 = " << x2 << endl;
			cout << "x2 = " << x1 << endl;
		}

	}
	return 0;
}


