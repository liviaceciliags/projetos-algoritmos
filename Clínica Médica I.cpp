#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int idade;
	char nome[100];
	double altura, peso, IMC;

	cin >> idade;
	cin.ignore();
	cin.getline(nome, 100);
	cin >> altura >> peso;

	IMC = peso / (pow(altura, 2));
 
	if (IMC <= 15)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Extremamente abaixo do peso" << endl;
	}
	else if (15 < IMC && IMC <= 16)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Gravemente abaixo do peso" << endl;
	}
	else if (16 < IMC && IMC <= 18.5)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Abaixo do peso ideal" << endl;
	}
	else if (18.5 < IMC && IMC <= 25)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Peso Ideal" << endl;
	}
	else if (25 < IMC && IMC <= 30)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Sobrepeso" << endl;
	}
	else if (30 < IMC && IMC <= 35)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Obesidade de grau" << endl;
	}
	else if (35 < IMC && IMC <= 40)
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Obesidade de grau II (grave)" << endl;
	}
	else 
	{
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << fixed << setprecision (2);
		cout << "IMC:" << IMC << " kg/m^2" << endl;
		cout << "Obesidade de grau III (morbida)" << endl;
	}
	return 0;
}
