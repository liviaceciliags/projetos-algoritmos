/*Fa�a um programa que analise duas strings.
Para cada string, mostre:
- O tamanho da string. Se for maior que 8 caracteres, deve dizer "string grande manokk"
- O n�mero de letras mai�sculas. Use a fun��o "isupper(caracter a ser analisado)";

Ap�s ler as duas strings, mostre:
- Se as strings s�o iguais. Se forem iguais, deve dizer "strings iguais". Se n�o, deve dizer "strings diferentes".

Todo o programa pode ser rodado na main (n�o h� necessidade de criar outras fun��es).*/



#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int i;
	char nome[50];
	char nome1[50];
	int tamanho;
	int tamanho1;
	int aux = 0;
	int aux1 = 0;


	for (i = 0; i < 2; i++)
	{
		cin.getline(nome, 50);
		tamanho = strlen(nome);
		if (tamanho > 8)
			cout << "string grande manokk" << endl;
		for (i = 0; i < tamanho; i++)
		{
			if (isupper(nome[i]))
				aux ++;
		}
		cout << aux << endl;
	}
	for (i = 0; i < 2; i++)
	{
		cin.getline(nome1, 50);
		tamanho1 = strlen(nome1);
		if (tamanho1 > 8)
			cout << "string grande manokk" << endl;
		for (i = 0; i < tamanho1; i++)
		{
			if (isupper(nome1[i]))
				aux1 ++;
		}
		cout << aux1 << endl;
	}
	
	
	if (strcmp(nome, nome1) == 0)
			cout << "strings iguais" << endl;
		else
			cout << "strings diferentes" << endl;


	return 0;
}
