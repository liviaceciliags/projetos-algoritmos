#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{

	double A, B, C, delta, X1, X2;

	cin >> A >> B >> C;

	delta = pow(B,2)-4*A*C;

	if (delta > 0 && A != 0)
	{
		X1 = (-B + sqrt(delta))/(2 * A);
		X2 = (-B - sqrt(delta))/(2 * A);
		
		cout <<fixed <<setprecision(5);
		cout<<"X1 = "<< X1<< endl;
		cout<<"X2 = "<< X2<< endl;	
	}
	else 
		cout<<"Impossivel"<<endl;

	return 0;
}
