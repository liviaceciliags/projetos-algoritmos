//s = (x³ - x²) * raizx

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	int x;
	double s;
	
	cin>> x;
	
	s = (pow(x,3) - pow(x,2))* sqrt(x);
	
	cout << fixed << setprecision (2);
	cout << s << endl;
	
	return 0;
	
}