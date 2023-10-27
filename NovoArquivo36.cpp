#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c)
{

	return (pow(b, 2) - 4 * a * c);

}

int main()
{

	float result, a, b , c;

	cin >> a >> b >> c;
	
	if (a != 0){
		result = calc_delta(a,b,c);
		cout << "delta = " << result << endl; 
	}

	return 0;
}
