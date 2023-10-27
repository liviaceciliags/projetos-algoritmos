#include <iostream>

using namespace std;


int main (){
	
	int *vetor = NULL;//vetor
	int *p = NULL;//ponteiro
	
	int i;//contador
	int N;//armazena o tamanho do vetor
	
	cin >> N;//lendo o tamanho do vetor
	
	//alocando memória 
	vetor = new int[N]; 
	p = new int;
	
	p = vetor; 
	
	//preenchendo o vetor
	for (i = 0; i < N; i++)
	{
		cin >> *p;
		p++;//incrementando
	}
	
	p = vetor;
 
    //mostrando o vetor
    for (i = 0; i <N; i++){
		cout << *p << " ";
		p++;
	}
	cout << endl;
	
	return 0;
}