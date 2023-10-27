#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raio (double r)
{


	return (4.0 / 3.0 * 3.14 * pow(r, 3));

}


int main()
{
	double r, v;

	cin >> r;

	v = raio(r);

	cout << fixed << setprecision(2) << v << endl;
	return 0;
}
