#include <iostream>

using namespace std;

int main()
{
	
	int a; //uma variavel normal
	int *b; //um ponteiro
	
	a = 2;
	b = &a;// &: operador de referencia, retorna o ender�o onde a variavel a foi colocada dentro da memoria ram 
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	*b = 3; //operador de refer�ncia
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	return 0;
}