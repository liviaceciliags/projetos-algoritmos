#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int X[100];
	int Y[100];
	int N;
	double Z[100];
	char Op[100];
	int i;
	int x;
	int y;
	char op;
	//cout << "Digite o numero de elementos: " <<endl;
	cin >> N;

	for (i = 0; i < N; i++)
	{
		//cout << "Digite um valor para a variavel x: " <<endl;
		cin >> x;
		X[i] = x;
	}
	for (i = 0; i < N; i++)
	{
		//cout << "Digite um valor para a variavel y: " <<endl;
		cin >> y;
		Y[i] = y;
	}
	for (i = 0; i < N; i++)
	{
		//cout << "Digite um valor para a variavel op: " <<endl;
		cin >> op;
		Op[i] = op;
		switch (Op[i])
		{
		case '*':
			Z[i] = X[i] * Y[i];
			cout << X[i] << " * " << Y[i] << " = " << Z[i] << endl;
			break;
		case '-':
			Z[i] = X[i] - Y[i];
			cout << X[i] << " - " << Y[i] << " = " << Z[i] << endl;
			break;
		case '+':
			Z[i] = X[i] + Y[i];
			cout << X[i] << " + " << Y[i] << " = " << Z[i] << endl;
			break;
		case '/':
			cout << fixed << setprecision (2) << endl;
			Z[i] = X[i]*1.0/ Y[i];
			cout <<  X[i] << " / " << Y[i] << " = " << Z[i] << endl;
			break;
		}
	}



return 0;
}
