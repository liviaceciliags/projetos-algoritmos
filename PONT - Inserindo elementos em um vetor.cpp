/*Faça um programa que leia inicialmente o tamanho N de um vetor
 de inteiros.

Depois, o programa deve alocar dinamicamente um vetor de N posições.

Em seguida, o programa deve ler N números inteiros e os inseri-los 
no vetor,usando um segundo ponteiro para esta tarefa: se o vetor é v, 
e o ponteiro é p, 
você deve usar p para apontar para a posição correta do vetor, 
e usar este ponteiro para inserir o elemento no vetor.

Finalmente, varra o vetor usando um ponteiro, e mostre o seu conteúdo.  

Entrada
A entrada consiste de 2 linhas:
- a primeira linha contém apenas um inteiro N, que corresponde ao 
tamanho do vetor

- na segunda linha, tem-se N inteiros, separados por um espaço em 
branco.

Saída
Na saída, o programa deve mostrar os elementos inseridos.

Exemplo de entrada   
Exemplo de saída
4
40 32 51 70*/


#include <iostream>


using namespace std;

int main (){
	
	int *vetor = NULL; //vetor é um ponteiro, onde o vetor aponta para o vazio
	int *p = NULL; // 
	int N; //tamanho do vetor
	int aux = 0; //contador p/ pares e positivos
	
	//lendo o tam do vetor
	cin >> N;
	
	//pegando um espaço da memória para que o 
	//ponteiro de vetor possa apontar
	vetor = new int[N]; //alocando dinamicamente o vetor
	p = new int;
	
	p = vetor; 
	//usando o ponteiro p para inserir o elemento no vetor
	for ( int i = 0; i < N; i++)
	{
		cin >>*p;
		p++; //aritmética de ponteiros	
	}
	
	p = vetor;
	
	//varrendo o vetor usando o ponteiro p, e mostrando o conteudo do vetor.
	for ( int i = 0; i < N; i++)
	{
		//verificando pares e positivos
		if ((*p >= 0) && (*p%2==0))
			aux++;
		p++;//aritmetica de ponteiros	
	}
	
	//imprimindo o maior elemento do vetor
	cout << aux;
	return 0;
	
}

