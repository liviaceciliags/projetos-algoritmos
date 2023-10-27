#include <iostream>

using namespace std;

int main()
{
	
	int x, y;
	int *p, *r;
	int soma;
	
	x = 2;
	y = 3;
	
	p = &x; //p = endereço de x
	//q = &y; //q = endereço de y
	r = &soma; // soma = 0 
	*r = 0;
	*r = *r + *p; //*p e * q acessa o valor armazenado no endereço solicitado
	p = &y;
	*r = *r + *p;
	
	cout << "soma = " << soma << endl; 
	
	return 0;
}