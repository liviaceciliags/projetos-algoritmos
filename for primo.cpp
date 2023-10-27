#include <iostream>

using namespace std;

int main()
{
	int x;
	int i;
	int div = 0;
		
	cin >> x; 

	for(i = 1 ; i <= x ; i++)
	{
		if(x % i == 0)
			div++;
	}
	if(div == 2)
		cout << "Primo" << endl;
	else
		cout << "Not" << endl;
	
	return 0;
}
