#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

	int horas, vm; 
	double distancia, combustivel;
	
	cin >> horas>> vm;
	
	distancia = vm*horas;
	
	combustivel = distancia/12;
	
	cout << fixed << setprecision (3);
	cout << combustivel << "litro(s)." << endl; 
	
	return 0;
	
}