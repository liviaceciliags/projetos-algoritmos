#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, N, p, tp;
	double f, tf, mediaf;
	char nome[50];


	tp = 0;
	tf = 0;

	cin >> N;

	for(i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline(nome, 50);
		cin >> p >> f;
		if (N == 0)
		{
			tp = 0;
			tf = 0;
		}
		else
		{
			tp = tp + p;
			tf = tf + f;
		}
	}
	;

	if (tf == 0)
	{
		mediaf = 0;
		cout << "Total de Pokebolas = " << tp << endl;
		cout << "Media de forca = " << mediaf << endl;
	}
	else
	{
		mediaf = tf / N;
		cout << "Total de Pokebolas = " << tp << endl;
		cout << fixed << setprecision(2);
		cout << "Media de forca = " << mediaf << endl;
	}
	return 0;
}
