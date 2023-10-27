#include <iostream>

using namespace std;


int main()
{
	int i;//(contador geral, variavel de controle)
	int N;//(número de repetições a serem lidas )
	int mm; //menor numero
	int num; //numero a ser lido
	int indice; //o numero de vezes que o programa rodou ate chegar ao menor numero
    mm = 100000;//o menor numero sera inicializado em 100000
	
	//lendo a quantidade de numeros
	//que vao ser lidos

	cin >> N;

	//for vai ler os valores a
	//serem lidos
	for(i = 1; i <= N; i++)//i inicia se em 1 para que o indice receba a posicao correta
	{
		//i++ incrementa +1 a cada repeticao
		cin >> num;
		if (num < mm){
				mm= num;
				indice = i; //o inicia recebera a posicao do menor numero
		}

	}
	//exibe os resultados finais
	cout << indice << endl;
	return 0;
}