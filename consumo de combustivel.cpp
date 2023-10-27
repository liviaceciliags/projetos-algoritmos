#include <iostream>
#include <iomanip>


using namespace std;


int main ()
{
	int h, vm;
	double distancia, litros;
	
	cin >> h >> vm;
	
	distancia = vm*h;
	
	litros = distancia/12;
	
	cout << fixed << setprecision (3) << litros << endl; 
	
	return 0;
	
} 
 