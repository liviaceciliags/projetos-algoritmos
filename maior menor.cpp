#include <iostream>

using namespace std;


int main()
{
	int i;//(contador geral, variavel de controle)
	int N;//(número de repetições a serem lidas )
	int MM; //maior numero
	int mm; //menor numero
	MM = 0;//o maior numero sera inicializado em 0
	mm = 100000;//o menor numero sera inicializado em 100000
	int num; //numero a ser lido

	//lendo a quantidade de numeros
	//que vao ser lidos

	cin >> N;

	//for vai ler os valores a
	//serem lidos
	for(i = 0; i < N; i++)//ou colocar (i = 1; i =< N; i++)
	{
		//i++ incrementa +1 a cada repeticao
		cin >> num;
		if (num > MM)
			MM = num;//o valor do MM foi atualizado
		if (num < mm)//se num menor que menor numero
				mm = num;//o valor do mm foi atualizado
	}
	//exibe os resultados finais
	cout << "Maior: " << MM << endl;
	cout << "Menor: " << mm << endl;
	return 0;
}
