#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int num = 0;
	double media;
	double soma = 0 ;
	double x = 0;


	while (num >= 0)
	{
		soma = soma + num;
		cin >> num;
		if (num >= 0)
			x = x + 1;
	}
	media = soma / x;
	cout << fixed << setprecision(2) << media << endl;

	return 0;
}
