#include <iostream> 


using namespace std;

int main (){
	int *v = NULL;//ponteiro para o vetor
	int N;//tam desejado parao vetor
	int i; //contador
	
	
	//lendo o tamanho desejado para o vetor 
	cin >> N;
	
	//alocando memória para o vetor
	v = new int[N];
	
	//preenchendo o vetor
	for (i = 0; i < N; i++)
		v[i]=i;
	
	//mostrando o vetor
	for (i = 0; i < N; i++)
		cout << v[i] << " ";
	
	//lliberando a memoria alocada
	delete[]v;
	return 0;
}