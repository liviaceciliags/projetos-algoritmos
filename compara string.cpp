#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char cod1[50];
	char cod2[50];


	strcpy (cod1, "Abre-te Sesamo");
	cin.getline(cod2, 50);

	//cout << "Senha digitada: " << strlwr(cod2) << endl; //strupr converte pra maiuscula
	//strlwr CONVERTE PRA MINUSCULA
	if (strcmp(strupr(cod1),strupr(cod2)== 0))
		cout << "Pode entrar " << endl;
	else
		cout << "Senha errada " << endl;

	return 0;

}
