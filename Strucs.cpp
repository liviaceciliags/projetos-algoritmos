/* Strucs manipulação de vetores
armazena qualquer coisa

criação de um novo tipo de dados*/

/*struct é uma super variável,
que tem várias variáveis,
 possivelmente de tipos diferentes, dentro dela.*/


#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
	//aqui declaramos a struct dados,
	//que tem duas variáveis dentro:
	// idade (int) e peso (float).
	char nome[50];
	int idade;
	float peso;

}; // naõ esquecer do ponto e virgula

int main()
{
	int i;
	int index = 0;
	int N; //#: numero de alguma coisa
	float maisPesado;
	dados atleta[10]; //atleta é uma variável do tipo dados.


	cin >> N; //#de atletas


	for (i = 0; i < N; i++)
	{
		cin.ignore();
		cout << "Nome: ";
		cin.getline(atleta[i].nome, 50);
		cout << "Idade: ";
		cin >> atleta[i].idade;

		cout << "Peso: ";
		cin >> atleta[i].peso;
		
		cout << "Atleta mais pesado: " << atleta[index].nome << endl;
		cout << "Nome: " << atleta[i].nome << endl;
		cout << "Idade: " << atleta[i].idade << endl;
		cout << "Peso: " << atleta[i].peso << endl;
	}
	
		maisPesado = atleta[0].peso;
		for (i =1; i < N; i++)
		{
			if ( maisPesado <atleta[i].peso)
			{
				index = i;
				maisPesado = atleta[i].peso;
			}
		}

		


	return 0;
}
