#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K)
{
	
	C = (5.0 / 9) * (F - 32);
	K = (5.0 / 9) * (F - 32) + 273;
}

int main()
{

	float F;
	float C;
	float K;

	cin >> F;


	converte(F, C, K);

	cout << fixed << setprecision(2);
	cout << "Celcius: " << C << endl;
	cout << "Kelvin: " << K << endl;

	return 0;
}
