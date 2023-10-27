#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//criar e escrever em um arquivo
	ofstream arq;
	char nomearq[50];
	double valor;
	cin.getline(nomearq, 50);
	arq.open(nomearq, ofstream :: out);

	cin >> valor;
	while(valor != 0)
	{
		arq << valor << endl;
		cin >> valor;
	}

	arq.close();


	//ler e imprimir dados de um arquivo
	ifstream arquivo;//leitura
	double x;

	arquivo.open(nomearq, ifstream :: in);//abrindo arquivo
	while(!arquivo.eof( ))
	{
		arquivo >> x;
		cout << x << endl;
	}
	arquivo.close();
	return 0;
}
