#include <iostream>

using namespace std;

int pot(int a, int n)
{
	if (n == 0)
		return 1;
	else 
		return a*pot(a, n-1);
}

int main ()
{

	int a;
	int n;
	int res;
	
	cin >> a;
	cin >> n;
	
	res = pot(a, n);
	
	cout << res << endl;
	
	return 0;
}
