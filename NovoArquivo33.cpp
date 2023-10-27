#include <iostream>


using namespace std;


int sinal(int n)
{
	if (n > 0)
		return 1;
	else if (n <  0)
		return -1;
	else
		return 0;
}
int main()
{
	int n;
	int result;

	cin >> n ;

	result = sinal(n);
	
	if (result == 1)
		cout << "Positivo" << endl;
	else if (result == -1)
		cout << "Negativo" << endl;
	else
		cout << "Zero" << endl;
	
	return 0;
}
