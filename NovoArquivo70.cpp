#include <iostream>

using namespace std;

int main()
{
	int vetor[5];// vetor � um ponteiro
	int *p;
	int i;
	for  ( i = 0; i < 5; i ++)
		vetor[i] = i;
	
	p = vetor;
	/*cout << *p << endl;
	p++; //incrementa a POSI��O do vetor
	cout << *p << endl;*/
	
	for  ( i = 0; i < 5; i ++){
		cout << *p << " ";
		p++;
	}
	cout << endl;
	
	return 0;
}