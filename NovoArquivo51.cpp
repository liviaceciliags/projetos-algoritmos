/*Faça um programa que analise duas strings.
Para cada string, mostre:
- O tamanho da string. Se for maior que 8 caracteres, deve dizer "string grande manokk"
- O número de letras maiúsculas. Use a função "isupper(caracter a ser analisado)";

Após ler as duas strings, mostre:
- Se as strings são iguais. Se forem iguais, deve dizer "strings iguais". Se não, deve dizer "strings diferentes".

Todo o programa pode ser rodado na main (não há necessidade de criar outras funções).*/



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
