#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	//char texto[200];
	char str[] = "Quem ri por ultimo nao entendeu a piada";//string sem comprimento determinado
	char *pch; //ponteiro//um outro vetor

	pch = strtok (str, " ,.-");//quebra em varios padaços
	while (pch != NULL)//pch recebe cada quebra de palavra
	{
		cout << pch << endl;
		pch = strtok (NULL, " ,.-");
	}

	return 0;

}
//<nome> Maro Aurelio < \nome <idade>17 < \idade >

//Marco Aurelio
