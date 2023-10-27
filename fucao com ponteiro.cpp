#include <iostream>

using namespace std;

int menor(int *vetor, int N)
{
	int menor =100000;
	int i;
	for  ( i = 0; i < N; i ++){
		if ( *vetor < menor)
			menor = *vetor;
		vetor++;//aritmética de ponteiros
	}
	return menor;
}

int main()
{
	int *vetor = NULL;// vetor é um ponteiro
	int *p = NULL;
	int i;
	int N;
	
	cin >> N;
	
	vetor = new int[N];
	
	p = new int;
	
	p = vetor;
	
	for  ( i = 0; i < N; i ++)
	{
		cin >> *p;
		p++;
	}
	
	p = vetor;

	cout << menor (p, N) << endl;
	
	return 0;
}