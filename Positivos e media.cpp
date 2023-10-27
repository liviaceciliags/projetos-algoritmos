#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int n;
	int i;
	int d;
	double x;
	double soma;
	double media;
	
	d = 0;
	n = 6;
	soma = 0;
	
	for( i = 0; i < n; i++)
	{
		cin >> x;
		if (x > 0)
		{
			soma = soma + x;
			d = d + 1;
		}

	}

	
	media = soma / d;
	cout << d << " valores positivos" << endl;
	cout<<fixed<<setprecision(1);
	cout << media << endl;

	return 0;
}

