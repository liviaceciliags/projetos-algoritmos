#include <iostream>
#include <iomanip>

using namespace std;


//struct que armazena as notas e a media das notas
struct dados
{
	int n1, n2, n3, n4; //armazena notas
	float media; //armazena media

};

int main()
{
	dados *notas = NULL;//tornado a struct dados um ponteiro inicializado como nulo

	notas = new dados; //alocando memória no ponteiro e apontando para o início

	int soma_notas = 0;//armazena a soma das notas 
	
	int N;//armazena a quantidade de vezes em que o código deve rodar

	//le N
	cin >> N;
	
	//lendo as notas como o ponteiro de struct 
	for (int i = 0; i < N; i++){
	
	cin >> notas[i].n1;
	cin >> notas[i].n2;
	cin >> notas[i].n3;
	cin >> notas[i].n4;
	soma_notas = soma_notas + notas[i].n1 + notas[i].n2 + notas[i].n3 + notas[i].n4;
	}

	//efetuando a soma das notas
	

	//efetuando a media das notas
	notas[N].media = 1.0 * soma_notas / (N*4);

	//imprimindo a media final
	cout << fixed << setprecision(2) << notas->media << endl;
	
	//liberando só uma posição do vetor
	delete notas;

	return 0;
}
