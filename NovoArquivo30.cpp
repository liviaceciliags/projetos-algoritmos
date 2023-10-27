#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

	int X, Y , C;
	double v1, v2, P, result;
	
	cin >> X>> Y >> C>> P;
	
	v1 = X*Y;
	
	v2 = C*P;
	
	result = v1-v2;
	
	cout << fixed << setprecision (2);
	cout << "R$ " << result << endl; 
	
	return 0;
	
}