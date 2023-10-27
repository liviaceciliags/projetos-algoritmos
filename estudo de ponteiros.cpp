#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	int veiculo = 10;
	int *pv;
	cout << veiculo << endl;
	
	pv = &veiculo;//ponteiro pv recebe o endereço da variavel veiculo
	
	cout << pv;
	
	*pv = 5; // no endereço apontado por pv, adicione o valor moto
	
	cout << *pv << endl;
}