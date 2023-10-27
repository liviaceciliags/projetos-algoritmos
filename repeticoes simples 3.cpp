#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	int i; // contador
	double fatorial = 1;//
	double N;// fatorial a ser calculado 

	cin >> N; // lendo fatorial a ser calculado
	for (i = 1; i <= N; i++)//inicializando i em 1 
							//condicionando i a ser menor
							//ou igual a N
							//incrementando +1 em i
	{
		fatorial = fatorial * i; //fatorial está recebendo 
		//o fatorial anterior multiplicado por i vezes rodado
	}

	cout << fatorial << endl;//printando fatorial.
	return 0;
}
