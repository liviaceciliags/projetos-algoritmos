#include <iostream>
#include <list>
#include <iomanip>

using namespace std;

float calcMedia(list<int> lista)
{
	list<int>::iterator p; //ponteiro pra andar na lista
	int soma = 0;// variavel que armazena a soma dos nós
	float media; //variavel que armazena a media
	int aux = 0; //aux pra quantidade de elementos
	//varrendo e somando os elementos da lista
	for (p = lista.begin(); p !=lista.end(); p++)
	{
		soma += *p;//somando elementos
		aux++;//incrementa +1 em aux
	}
	//calculando a media
	media = 1.0*soma/aux;
	return media;//retornando o valor da media
}


int main ()
{
	list<int>fila;//declarando a fila
	
	int x;//variavel pra leitura
	//faça enquanto x for diferente de zero
	do
	{
		cin >> x; //lendo x
		//verificando condição
		if (x != 0){
			//inserindo na lista
			fila.push_back(x);
		}
	}while(x !=0);
	
	//imprimindo a soma dos nós 
	cout << fixed << setprecision(2) <<calcMedia(fila) << endl;
	
	//liberando a memoria alocada pela lista ligada
	while (!fila.empty())
		fila.pop_front();//remove o primeiro elemento da lista
		
	return 0;
}