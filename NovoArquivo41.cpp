#include <iostream>
#include <iomanip>


using namespace std;

double media (double N1, double N2)
{
	return ((N1+N2)/2);
}

int main()
{
	double N1, N2, result;
	
	cin >> N1 >> N2;
	
	result = media (N1, N2);
	
	cout << fixed << setprecision (1) << result;
	
	return 0;
}