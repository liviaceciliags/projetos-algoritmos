#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double X,Y,Z, dolar, libra, euro;
	

	cin >> X >> Y >> Z;
	
	dolar = X/4.04;
	libra = Y/5.321;
	euro = Z/4.60;
	
	cout << fixed << setprecision(2);
	cout <<"Dolar: "<< dolar << endl;
	cout <<"Libra: "<< libra << endl;
	cout <<"Euro: "<< euro << endl;
	
	
	return 0;
}