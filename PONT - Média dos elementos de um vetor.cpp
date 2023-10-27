#include <iostream>
#include <iomanip>

using namespace std;


int main (){
	
	int *vetor = NULL;//vetor
	int *p = NULL;//ponteiro
	
	int i;//contador
	int N;//armazena o tamanho do vetor
	int aux = 0;
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
		aux = (aux + *p);
		p++;
	}
	
	cout << fixed << setprecision (2) << endl;
	cout << aux*1.0/N << endl;
	
	return 0;
}