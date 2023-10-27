#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	double X, Y, Z, x1, x2, x3, dolar, libra, euro;
	
	cin >> X>> Y >> X;
	
	x1 = 4.04;
	x2 = 5.32;
	x3 = 4.60;
	
	dolar = X/x1;
	libra = Y/x2;
	euro = Z/x3;
	
	
	cout << fixed << setprecision (2);
	cout << "Dolar: " << dolar << endl; 
	cout << "Libra: " << libra << endl; 
	cout << "Euro: " << euro << endl; 
	
	return 0;
	
}