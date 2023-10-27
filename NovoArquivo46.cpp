#include <iostream>

using namespace std;

void converte(float F, float &C, float &K)
{
	C = ((5/9)*(F-32));
	K = ((5/9)*(F-32)) + 273; 
}

int main()
{
	float F, C, K;
	
	cin >> F; 
	converte(F, C, K);
	cout << converte(F, C, K) << C << endl;
	cout << K << endl;
	return 0;
}