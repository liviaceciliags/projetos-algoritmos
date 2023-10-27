#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main ()
{
	double x, lambda, res;
	cin >> x >> lambda;
		
	res = lambda*exp(-lambda*x);
	cout <<fixed << setprecision(2);
	cout << res << endl;	
	
	return 0;
}