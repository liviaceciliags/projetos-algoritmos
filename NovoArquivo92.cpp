#include <iostream>


using namespace std;

void soma(int x, int y, int * s)
	{
		*s = x + y;
	}
int main ()
{
	/*
	int a;  // uma vari�vel normal
	int *b; // um ponteiro
	a = 2;
	b = &a;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl; //& � o endere�o da informa��o
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl;// *b � o conteurdo armazenado no endere�o &a;
	*/

	/*
		int a;
		int *b;
		a = 2;
		b = &a;
		*b = 3;
		cout << "a = " << a << endl;
		*/
	/*
	int vetor[3];
	int *p;
	int i;
	for (i = 0; i < 3; i++)
		vetor[i] = i;
	p = &vetor[2];
	cout << *p << endl;
	p--;
	cout << *p << endl;
	p--;
	cout << *p << endl;*/

	/*float *v; // um ponteiro para float
	int tam = 8;  // tamanho do vetor
	int i;    // contador

	//cin >> tam; // lendo tamanho desejado
	v = new float [tam]; // alocando mem�ria
	for (i = 0; i < tam; i++) // preenchendo o vetor
		v[i] = i * i;
	for (i = 0; i < tam; i++) // mostrando o vetor
		cout << v[i] << endl;
	delete [] v; // liberando mem�ria alocada*/

	
	
		int a = 2, b = 3, c = 0;
		soma(a, b, &c);
		cout << a << " " << b << " " <<c << endl;
	



	return 0;
}
