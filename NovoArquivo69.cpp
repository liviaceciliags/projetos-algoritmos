#include <iostream>

using namespace std;

int main()
{
	
	int x, y;
	int *p, *r;
	int soma;
	
	x = 2;
	y = 3;
	
	p = &x; //p = endere�o de x
	//q = &y; //q = endere�o de y
	r = &soma; // soma = 0 
	*r = 0;
	*r = *r + *p; //*p e * q acessa o valor armazenado no endere�o solicitado
	p = &y;
	*r = *r + *p;
	
	cout << "soma = " << soma << endl; 
	
	return 0;
}