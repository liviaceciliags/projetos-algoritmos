#include <iostream>


using namespace std;

int main ()
{
	int S, T, F, H;

	cin >> S >> T >> F;

	H = S + T + F;

	if (H < 0)
	{
		H = 24 + H;
		cout << H << endl;
	}
	else if (H >= 24)
	{
		H = H % 24;
		cout << H << endl;
	}	
	else 
		cout << H << endl;
	
	return 0;
}
