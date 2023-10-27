#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int *vetor = NULL;// vetor é um ponteiro
	int *p = NULL;
	int i;
	int N;
	int aux = 0;
	
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

	for  ( i = 0; i < N; i ++){
		if ( *p > 0 && *p % 2 == 0)
			aux++;
		p++;//aritmética de ponteiros
	}
	
	cout << aux << endl;
	
	return 0;
}