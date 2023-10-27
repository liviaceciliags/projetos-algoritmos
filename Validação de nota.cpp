#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double nota1, nota2, media;
	int X;

	X = 1;
	while( X == 1 )
	{
		do
		{
			cin >> nota1;
			if(nota1 < 0 || nota1 > 10)
				cout << "nota invalida" << endl;
		}
		while(nota1 < 0 || nota1 > 10);

		do
		{
			cin >> nota2;
			if(nota2 < 0 || nota2 > 10)
				cout << "nota invalida" << endl;
		}
		while(nota2 < 0 || nota2 > 10);

		media = (nota1 + nota2) / 2;
		cout << fixed << setprecision (2) << "media = " << media << endl;

		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> X;
		while ( X < 1 || X > 2)
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> X;
			X = X;
		}
		X = X;
	}

	return 0;
}
